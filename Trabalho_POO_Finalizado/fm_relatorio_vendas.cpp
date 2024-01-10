#include "fm_relatorio_vendas.h"
#include "ui_fm_relatorio_vendas.h"

fm_relatorio_vendas::fm_relatorio_vendas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_relatorio_vendas)
{
    ui->setupUi(this);

    ui->table_relatorio->setColumnCount(4);
    QStringList cabecalhoRelatorio = {"ID", "CLIENTE", "TOTAL (R$)", "QUANTIDADE"};

    //Tamanho de cada coluna table produtos
    ui->table_relatorio->setColumnWidth(0, 30);
    ui->table_relatorio->setColumnWidth(1, 300);
    ui->table_relatorio->setColumnWidth(2, 70);
    ui->table_relatorio->setColumnWidth(3, 90);

    ui->table_relatorio->setHorizontalHeaderLabels(cabecalhoRelatorio);
    ui->table_relatorio->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->table_relatorio->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->table_relatorio->setStyleSheet("QTableView {selection-background-color:blue}");
    ui->table_relatorio->verticalHeader()->setVisible(false);

    QSqlQuery query;
    query.prepare("select * from tb_vendas");

    if(query.exec()){
        int contador = 0;

        while(query.next()){
            ui->table_relatorio->insertRow(contador);
            ui->table_relatorio->setItem(contador, 0, new QTableWidgetItem(query.value(0).toString()));
            ui->table_relatorio->setItem(contador, 1, new QTableWidgetItem(query.value(1).toString()));
            ui->table_relatorio->setItem(contador, 2, new QTableWidgetItem(query.value(2).toString()));
            ui->table_relatorio->setItem(contador, 3, new QTableWidgetItem(query.value(3).toString()));
            ui->table_relatorio->setRowHeight(contador, 20);
            contador++;
        }
    }
    else{
        qDebug("A tabela de vendas nao foi executada com sucesso!");
    }
}

fm_relatorio_vendas::~fm_relatorio_vendas()
{
    delete ui;
}

void fm_relatorio_vendas::on_btn_voltar_clicked()
{
    close();
}

