#include "fm_cadastro_produto.h"
#include "ui_fm_cadastro_produto.h"
#include "produto.h"
#include<QMessageBox>

fm_cadastro_produto::fm_cadastro_produto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_cadastro_produto)
{
    ui->setupUi(this);
}

fm_cadastro_produto::~fm_cadastro_produto()
{
    delete ui;
}

void fm_cadastro_produto::on_btn_confirma_clicked()
{
    QMessageBox::StandardButton confirma = QMessageBox::question(this, "Confirmacao de cadastro", "Deseja realmente confirmar o cadastro?");    //Ao confirmar o cadastro, cria um objeto auxiliar da Classe Produto com os valores inseridos na tela
    if(confirma == QMessageBox::Yes){ 
        Produto *aux = new Produto(ui->ln_name->text(),ui->bx_valor->value(),ui->ln_codigo->text(), ui->bx_quantidade->value());

        QSqlQuery query;                                                                                                                        //Envia para o banco de dados os valores do objeto auxiliar
        query.prepare("insert into tb_estoque (nome, preco, quantidade, codigo) values"
                      "('"+aux->getNome()+"',:preco,:quantidade,'"+aux->getCodigo()+"')");
        query.bindValue(":preco", aux->getValor());
        query.bindValue(":quantidade", aux->getQuantidade());
        if(query.exec()){
            QMessageBox::information(this,"Cadastro finalizado","Cadastro realizado com sucesso");
            delete(aux);
            close();
        }else{
            QMessageBox::warning(this,"Error","Ocorreu um erro com o cadastro");
        }
    }
}


void fm_cadastro_produto::on_btn_cancelar_clicked() //cancela a operacao
{
    QMessageBox::StandardButton confirma = QMessageBox::question(this, "Sair da tela", "Deseja realmente cancelar o cadastro?");
    if(confirma == QMessageBox::Yes){
        close();
    }
}

