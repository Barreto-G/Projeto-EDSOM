#include "fm_principal.h"
#include "ui_fm_principal.h"
#include <QMessageBox>
#include "fm_realizar_venda.h"
#include "fm_manter_estoque.h"
#include "fm_login.h"
#include<QDebug>
#include "fm_manter_clientes.h"
#include "fm_relatorio_vendas.h"

static QSqlDatabase bancoDados = QSqlDatabase::addDatabase("QSQLITE");

fm_principal::fm_principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::fm_principal)
{
    ui->setupUi(this);
    QString local = qApp->applicationDirPath();
    QString banco = local+ "/BancodeDados.db";
    qDebug()<<banco;

    bancoDados.setConnectOptions("QSQLITE_OPEN_READONLY;QSQLITE_ENABLE_SHARED_CACHE;QSQLITE_OPEN_URI"); //Impede a criacao de um arquivo de banco de dados vazio
    bancoDados.setDatabaseName(banco);


    if(!bancoDados.open()){ //Se nao acha um banco de dados existente, fecha o programa
        QMessageBox::critical(this,"ERRO","Nao foi possivel estabelecer conexao com o banco de dados.\nO Programa sera encerrado.");
        exit(0);
    }
    else{   //Se acha, volta para as configuracoes normais e reabre o banco de dados para possibilitar a edicao
        bancoDados.setConnectOptions();
        bancoDados.open();
    }

    fm_login fm_logar;
    fm_logar.exec();

}

fm_principal::~fm_principal()
{
    bancoDados.close(); //desconecta do banco de dados antes de fechar o programa
    delete ui;
}


void fm_principal::on_btn_realizar_venda_clicked()
{
    fm_realizar_venda formVenda;
    formVenda.exec();
}


void fm_principal::on_btn_manter_estoque_clicked()
{
    fm_manter_estoque formManterEstoque;
    formManterEstoque.exec();
}


void fm_principal::on_btn_manter_clientes_clicked()
{
    fm_manter_clientes cli;
    cli.exec();
}


void fm_principal::on_actionRelat_rio_de_Vendas_triggered()
{
    fm_relatorio_vendas formVendas;
    formVendas.exec();
}


void fm_principal::on_actionFechar_triggered()
{
    exit(0);
}

