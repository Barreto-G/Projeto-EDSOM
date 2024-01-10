#include "fm_editar_produto.h"
#include "ui_fm_editar_produto.h"
#include<QtSql>
#include<QMessageBox>
#include"produto.h"

static int id_id;

fm_editar_produto::fm_editar_produto(QWidget *parent, int id) : //formulario inicializa procurando no banco de dados os valores do produto com o id igual ao do argumento
    QDialog(parent),
    ui(new Ui::fm_editar_produto)
{
    ui->setupUi(this);
    id_id=id;

    QSqlQuery query;
    query.prepare("select * from tb_estoque where id="+QString::number(id_id));
    if(query.exec()){
        query.first();
        ui->ln_name->setText(query.value(1).toString());
        ui->ln_codigo->setText(query.value(4).toString());
        ui->bx_quantidade->setValue(query.value(3).toInt());
        ui->bx_valor->setValue(query.value(2).toDouble());
    }else{
        QMessageBox::warning(this,"ERRO","Erro ao carregar arquivo do banco de dados");
    }
}

fm_editar_produto::~fm_editar_produto()
{
    delete ui;
}


void fm_editar_produto::on_btn_confirma_clicked()   //quando confirmado, atualiza os valores no banco de dados para o id selecionado
{
    QMessageBox::StandardButton confirma = QMessageBox::question(this, "Confirmacao de alteracao", "Deseja realmente confirmar a alteracao?");
    if(confirma == QMessageBox::Yes){
        Produto *aux = new Produto(ui->ln_name->text(),ui->bx_valor->value(),ui->ln_codigo->text(), ui->bx_quantidade->value());

        QSqlQuery query;
        query.prepare("update tb_estoque set nome='"+aux->getNome()+"', preco=:preco, quantidade=:quantidade, codigo='"+aux->getCodigo()+"' where id="+QString::number(id_id));
        query.bindValue(":preco", aux->getValor());
        query.bindValue(":quantidade", aux->getQuantidade());
        if(query.exec()){
            QMessageBox::information(this,"Alteracao concluida","Alteracao realizada com sucesso");
            delete(aux);
            close();
        }else{
            QMessageBox::warning(this,"Error","Ocorreu um erro com a operacao");
        }
    }

}


void fm_editar_produto::on_btn_cancelar_clicked()   //sai da tela e cancela a operacao de edicao
{
    QMessageBox::StandardButton confirma = QMessageBox::question(this, "Sair da tela", "Deseja realmente cancelar a alteracao?");
    if(confirma == QMessageBox::Yes){
        close();
    }
}

