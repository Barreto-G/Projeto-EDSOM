#include "fm_manter_estoque.h"
#include "ui_fm_manter_estoque.h"
#include "fm_cadastro_produto.h"
#include "fm_editar_produto.h"
#include<QMessageBox>

void fm_manter_estoque::atualiza_estoque(){ //Funcao que limpa a tabela e readicina os produtos do banco de dados
    while(ui->tab_estoque->rowCount()>0){
        ui->tab_estoque->removeRow(0);
    }
    QSqlQuery query;
    query.prepare("select * from tb_estoque");
    if(query.exec()){
        int cont=0;
        ui->tab_estoque->setColumnCount(5);
        while(query.next()){
            ui->tab_estoque->insertRow(cont);
            ui->tab_estoque->setItem(cont, 0,new QTableWidgetItem(query.value(0).toString()));
            ui->tab_estoque->setItem(cont, 1,new QTableWidgetItem(query.value(1).toString()));
            ui->tab_estoque->setItem(cont, 2,new QTableWidgetItem(query.value(2).toString()));
            ui->tab_estoque->setItem(cont, 3,new QTableWidgetItem(query.value(3).toString()));
            ui->tab_estoque->setItem(cont, 4,new QTableWidgetItem(query.value(4).toString()));
            ui->tab_estoque->setRowHeight(cont, 20);
            cont++;
        }
        ui->tab_estoque->setCurrentItem(ui->tab_estoque->item(0,0));
    }else{
        QMessageBox::warning(this, "Erro", "Ocorreu um erro ao acesar o estoque");
    }
}



fm_manter_estoque::fm_manter_estoque(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_manter_estoque)
{
    ui->setupUi(this);
        atualiza_estoque();
        ui->tab_estoque->setColumnWidth(0,30);      //configuracao inicial da tabela
        ui->tab_estoque->setColumnWidth(1,300);
        ui->tab_estoque->setColumnWidth(2,70);
        ui->tab_estoque->setColumnWidth(3,90);
        ui->tab_estoque->setColumnWidth(4,70);

        QStringList cabecalhos={"ID", "NOME", "VALOR (R$)", "QUANTIDADE", "CÓDIGO"};
        ui->tab_estoque->setHorizontalHeaderLabels(cabecalhos);
        ui->tab_estoque->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tab_estoque->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tab_estoque->verticalHeader()->setVisible(false);
        ui->tab_estoque->setStyleSheet("QTableView {selection-background-color:blue}");
        ui->tab_estoque->setSelectionMode(ui->tab_estoque->SingleSelection);

        ui->tab_estoque->setCurrentItem(ui->tab_estoque->item(0,0));
}

fm_manter_estoque::~fm_manter_estoque()
{
    delete ui;
}

void fm_manter_estoque::on_btn_novo_clicked()   //Abre o formulario para o cadastro de novo produto
{
    fm_cadastro_produto formCadastroProd;
    formCadastroProd.exec();
    atualiza_estoque();
}


void fm_manter_estoque::on_btn_excluir_clicked()    //Funcao pega o Id do produto selecionado na tabela e exclui do banco de dados o produto que tem o ID igual
{
    QMessageBox::StandardButton confirma = QMessageBox::question(this, "Confirmacao de exclusao", "Deseja realmente excluir o registro?");
    if(confirma == QMessageBox::Yes){
        int linha = ui->tab_estoque->currentRow();
        QString id = ui->tab_estoque->item(linha, 0)->text();
        QSqlQuery query;
        query.prepare("delete from tb_estoque where id="+id);
        if(!query.exec()){
            QMessageBox::warning(this, "Erro", "Erro ao excluir registro");
        }else{
            atualiza_estoque();
            QMessageBox::information(this, "Registro Excluido", "Registro excluido com sucesso!");
        }
    }
}


void fm_manter_estoque::on_btn_editar_clicked() //Abre o formulario de edicao de produto, passando o id do produto selecionado na tabela como argumento
{
    int id = ui->tab_estoque->item(ui->tab_estoque->currentRow(), 0)->text().toInt();
    fm_editar_produto edit(this, id);
    edit.exec();
    atualiza_estoque();
}

