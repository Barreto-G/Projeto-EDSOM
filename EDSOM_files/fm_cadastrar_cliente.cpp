#include "fm_cadastrar_cliente.h"
#include "ui_fm_cadastrar_cliente.h"
#include<QMessageBox>
#include<QtSql>
#include"cliente.h"

fm_cadastrar_cliente::fm_cadastrar_cliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_cadastrar_cliente)
{
    ui->setupUi(this);
}

fm_cadastrar_cliente::~fm_cadastrar_cliente()
{
    delete ui;
}

void fm_cadastrar_cliente::on_btn_confirma_clicked()
{
    QMessageBox::StandardButton confirma = QMessageBox::question(this, "Confirmacao de cadastro", "Deseja realmente confirmar o cadastro?");        //Ao confirmar o cadastro, cria um objeto auxiliar da Classe Cliente com os valores inseridos na tela
    if(confirma == QMessageBox::Yes){
        Cliente *aux = new Cliente(0, ui->ln_nome->text(), ui->ln_CPF->text(), ui->ln_rg->text(),ui->ln_sexo->text(),ui->ln_data->text());          //Envia para o banco de dados os valores do objeto auxiliar
        aux->setCidade(ui->ln_cidade->text());
        aux->setEmail(ui->ln_email->text());
        aux->setEndereco(ui->ln_endereco->text());
        aux->setTelefone(ui->ln_telefone->text());

        QSqlQuery query;
        query.prepare("insert into tb_clientes (nome, cpf,rg,telefone,endereco,cidade,email,dt_nascimento,sexo) values"
                      "('"+aux->getNome()+"','"+aux->getCPF()+"','"+aux->getRG()+"', '"+aux->getTelefone()+"','"+aux->getEndereco()+"','"+aux->getCidade()+"','"+aux->getEmail()+"','"+aux->getDataNascimento()+"','"+aux->getSexo()+"')");
        if(query.exec()){
            QMessageBox::information(this,"Cadastro finalizado","Cadastro realizado com sucesso");
            delete(aux);
            close();
        }else{
            QMessageBox::warning(this,"Error","Ocorreu um erro com o cadastro");
            delete(aux);
        }
    }
}


void fm_cadastrar_cliente::on_btn_cancela_clicked() //cancela a operacao
{
    QMessageBox::StandardButton confirma = QMessageBox::question(this, "Sair da tela", "Deseja realmente cancelar o cadastro?");
    if(confirma == QMessageBox::Yes){
        close();
    }
}

