#include "add_cliente.h"
#include "ui_add_cliente.h"
#include <QMessageBox>
#include <fm_realizar_venda.h>


add_cliente::add_cliente(QWidget *parent, int id) :
    QDialog(parent),
    ui(new Ui::add_cliente)
{
    ui->setupUi(this);

    //tabela de clientes
    ui->table_clientes->setColumnCount(3);
    QStringList cabecalho = {"ID", "NOME", "CPF"};

    ui->table_clientes->setColumnWidth(0,30);
    ui->table_clientes->setColumnWidth(1,300);
    ui->table_clientes->setColumnWidth(2,100);

    ui->table_clientes->setHorizontalHeaderLabels(cabecalho);
    ui->table_clientes->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->table_clientes->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->table_clientes->verticalHeader()->setVisible(false);
    ui->table_clientes->setStyleSheet("QTableView {selection-background-color:blue}");
    ui->table_clientes->setSelectionMode(ui->table_clientes->SingleSelection);

    ui->table_clientes->setCurrentItem(ui->table_clientes->item(0,0));

    QSqlQuery query;
    query.prepare("select * from tb_clientes");
    if(query.exec()){
        int cont=0;
        ui->table_clientes->setColumnCount(3);
        while(query.next()){
            ui->table_clientes->insertRow(cont);
            ui->table_clientes->setItem(cont, 0,new QTableWidgetItem(query.value(0).toString()));
            ui->table_clientes->setItem(cont, 1,new QTableWidgetItem(query.value(1).toString()));
            ui->table_clientes->setItem(cont, 2,new QTableWidgetItem(query.value(2).toString()));
            ui->table_clientes->setRowHeight(cont, 20);
            cont++;
        }
        ui->table_clientes->setCurrentItem(ui->table_clientes->item(0,0));
    }else{
        QMessageBox::warning(this, "Erro", "Ocorreu um erro ao acessar banco dos clientes");
    }

}

add_cliente::~add_cliente()
{
    delete ui;
}

void add_cliente::on_btn_adicionar_clicked()
{
    close();
}

