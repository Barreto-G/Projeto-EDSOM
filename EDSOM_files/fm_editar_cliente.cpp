#include "fm_editar_cliente.h"
#include "ui_fm_editar_cliente.h"
#include"cliente.h"
#include<QtSql>
#include<QMessageBox>

static int id_id;

fm_editar_cliente::fm_editar_cliente(QWidget *parent, int id) : //formulario inicializa procurando no banco de dados os valores do cliente com o id igual ao do argumento
    QDialog(parent),
    ui(new Ui::fm_editar_cliente)
{
    id_id = id;
    ui->setupUi(this);
    QSqlQuery query;
    query.prepare("select * from tb_clientes where id="+QString::number(id_id));
    if(query.exec()){
        query.first();
        ui->ln_nome->setText(query.value(1).toString());
        ui->ln_CPF->setText(query.value(2).toString());
        ui->ln_rg->setText(query.value(3).toString());
        ui->ln_tel->setText(query.value(4).toString());
        ui->ln_endereco->setText(query.value(5).toString());
        ui->ln_cidade->setText(query.value(6).toString());
        ui->ln_email->setText(query.value(7).toString());
        ui->ln_dt->setText(query.value(8).toString());
        ui->ln_sexo->setText(query.value(8).toString());

    }else{
        QMessageBox::warning(this,"ERRO","Erro ao carregar arquivo do banco de dados");
    }
}

fm_editar_cliente::~fm_editar_cliente()
{
    delete ui;
}

void fm_editar_cliente::on_btn_confirma_clicked()   //quando confirmado, atualiza os valores no banco de dados para o id selecionado
{
    QMessageBox::StandardButton confirma = QMessageBox::question(this, "Confirmacao de alteracao", "Deseja realmente confirmar a alteracao?");
    if(confirma == QMessageBox::Yes){
        Cliente *aux = new Cliente(0, ui->ln_nome->text(), ui->ln_CPF->text(), ui->ln_rg->text(),ui->ln_sexo->text(),ui->ln_dt->text());
        aux->setCidade(ui->ln_cidade->text());
        aux->setEmail(ui->ln_email->text());
        aux->setEndereco(ui->ln_endereco->text());
        aux->setTelefone(ui->ln_tel->text());

        QSqlQuery query;
        query.prepare("update tb_clientes set nome='"+aux->getNome()+"', cpf='"+aux->getCPF()+"',rg='"+aux->getRG()+"',telefone='"+aux->getTelefone()+"',endereco='"+aux->getEndereco()+"',cidade='"+aux->getCidade()+"',email='"+aux->getEmail()+"',dt_nascimento='"+aux->getDataNascimento()+"',sexo='"+aux->getSexo()+"' where id="+QString::number(id_id));
        if(query.exec()){
            QMessageBox::information(this,"Alteracao concluida","Alteracao realizada com sucesso");
            delete(aux);
            close();
        }else{
            QMessageBox::warning(this,"Error","Ocorreu um erro com a operacao");
            delete(aux);
        }
    }
}


void fm_editar_cliente::on_btn_cancela_clicked()    //sai da tela e cancela a operacao de edicao
{
    QMessageBox::StandardButton confirma = QMessageBox::question(this, "Sair da tela", "Deseja realmente cancelar a alteracao?");
    if(confirma == QMessageBox::Yes){
        close();
    }
}

