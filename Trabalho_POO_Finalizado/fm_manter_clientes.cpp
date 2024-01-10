#include "fm_manter_clientes.h"
#include "qsqlquery.h"
#include "ui_fm_manter_clientes.h"
#include"fm_cadastrar_cliente.h"
#include "fm_editar_cliente.h"
#include<QMessageBox>
#include<QSql>


void fm_manter_clientes::atualiza_estoque(){   //Funcao que limpa a tabela e readicina os clientes do banco de dados
    while(ui->tb_clientes->rowCount()>0){
        ui->tb_clientes->removeRow(0);
    }

    QSqlQuery query;
    query.prepare("select * from tb_clientes");
    if(query.exec()){
        int cont=0;
        ui->tb_clientes->setColumnCount(3);
        while(query.next()){
            ui->tb_clientes->insertRow(cont);
            ui->tb_clientes->setItem(cont, 0,new QTableWidgetItem(query.value(0).toString()));
            ui->tb_clientes->setItem(cont, 1,new QTableWidgetItem(query.value(1).toString()));
            ui->tb_clientes->setItem(cont, 2,new QTableWidgetItem(query.value(2).toString()));
            ui->tb_clientes->setRowHeight(cont, 20);
            cont++;
        }
        ui->tb_clientes->setCurrentItem(ui->tb_clientes->item(0,0));
    }else{
        QMessageBox::warning(this, "Erro", "Ocorreu um erro ao acessar banco dos clientes");
    }
}


fm_manter_clientes::fm_manter_clientes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_manter_clientes)
{
    ui->setupUi(this);
    atualiza_estoque();
    ui->tb_clientes->setColumnWidth(0,30);          //configuracao inicial da tabela
    ui->tb_clientes->setColumnWidth(1,300);
    ui->tb_clientes->setColumnWidth(2,100);
    QStringList cabecalhos={"ID", "NOME", "CPF"};
    ui->tb_clientes->setHorizontalHeaderLabels(cabecalhos);
    ui->tb_clientes->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tb_clientes->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tb_clientes->verticalHeader()->setVisible(false);
    ui->tb_clientes->setStyleSheet("QTableView {selection-background-color:blue}");
    ui->tb_clientes->setSelectionMode(ui->tb_clientes->SingleSelection);

    ui->tb_clientes->setCurrentItem(ui->tb_clientes->item(0,0));
}

fm_manter_clientes::~fm_manter_clientes()
{
    delete ui;
}

void fm_manter_clientes::on_btn_cadastrar_cliente_clicked()     //Abre o formulario para o cadastro de novo cliente
{
    fm_cadastrar_cliente cad_cliente;
    cad_cliente.exec();
    atualiza_estoque();
}

void fm_manter_clientes::on_btn_remover_cliente_clicked()       //Funcao pega o Id do cliente selecionado na tabela e exclui do banco de dados o cliente que tem o ID igual
{
    QMessageBox::StandardButton confirma = QMessageBox::question(this, "Confirmacao de exclusao", "Deseja realmente excluir o registro?");
    if(confirma == QMessageBox::Yes){
        int linha = ui->tb_clientes->currentRow();
        QString id = ui->tb_clientes->item(linha, 0)->text();
        QSqlQuery query;
        query.prepare("delete from tb_clientes where id="+id);
        if(!query.exec()){
            QMessageBox::warning(this, "Erro", "Erro ao excluir registro");
        }else{
            atualiza_estoque();
            QMessageBox::information(this, "Registro Excluido", "Registro excluido com sucesso!");
        }
    }
    atualiza_estoque();
}


void fm_manter_clientes::on_btnc_editar_cliente_clicked()   //Abre o formulario de edicao de cliente, passando o id do cliente selecionado na tabela como argumento
{
    int id = ui->tb_clientes->item(ui->tb_clientes->currentRow(), 0)->text().toInt();
    fm_editar_cliente edit(this, id);
    edit.exec();
    atualiza_estoque();
}

