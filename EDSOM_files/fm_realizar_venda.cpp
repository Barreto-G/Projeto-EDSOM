#include "fm_realizar_venda.h"
#include "ui_fm_realizar_venda.h"
#include "QMessageBox"

double precoTotal = 0;
int quantidadeTotal = 0;

fm_realizar_venda::fm_realizar_venda(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_realizar_venda)
{
    ui->setupUi(this);

    //tabela de produtos
    ui->table_produtos->setColumnCount(5);
    QStringList cabecalhoProdutos = {"ID", "NOME", "VALOR (R$)", "QUANTIDADE", "CÓDIGO"};
    QStringList cabecalhoCarrinho = {"ID", "NOME", "TOTAL (R$)", "QUANTIDADE", "CÓDIGO"};

    //Tamanho de cada coluna table produtos
    ui->table_produtos->setColumnWidth(0, 30);
    ui->table_produtos->setColumnWidth(1, 300);
    ui->table_produtos->setColumnWidth(2, 70);
    ui->table_produtos->setColumnWidth(3, 90);
    ui->table_produtos->setColumnWidth(4, 70);

    ui->table_produtos->setHorizontalHeaderLabels(cabecalhoProdutos);
    ui->table_produtos->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->table_produtos->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->table_produtos->setStyleSheet("QTableView {selection-background-color:blue}");
    ui->table_produtos->verticalHeader()->setVisible(false);

    //iniciando a query com todos produtos do estoque
    QSqlQuery query;
    query.prepare("select * from tb_estoque");

    //se query executar serão inseridos os produtos do banco de dados na tabela
    if(query.exec()){
        int contador = 0;

        while(query.next()){
            ui->table_produtos->insertRow(contador);
            ui->table_produtos->setItem(contador, 0, new QTableWidgetItem(query.value(0).toString()));
            ui->table_produtos->setItem(contador, 1, new QTableWidgetItem(query.value(1).toString()));
            ui->table_produtos->setItem(contador, 2, new QTableWidgetItem(query.value(2).toString()));
            ui->table_produtos->setItem(contador, 3, new QTableWidgetItem(query.value(3).toString()));
            ui->table_produtos->setItem(contador, 4, new QTableWidgetItem(query.value(4).toString()));
            ui->table_produtos->setRowHeight(contador, 20);
            contador++;
        } 
    }
    else{
        qDebug("A tabela de estoque nao foi executada com sucesso!");
    }

    //tabela do carrinho
    ui->table_carrinho->setColumnCount(5);

    //tamanho de cada coluna table carrinho
    ui->table_carrinho->setColumnWidth(0, 30);
    ui->table_carrinho->setColumnWidth(1, 300);
    ui->table_carrinho->setColumnWidth(2, 70);
    ui->table_carrinho->setColumnWidth(3, 90);
    ui->table_carrinho->setColumnWidth(4, 70);

    ui->table_carrinho->setHorizontalHeaderLabels(cabecalhoCarrinho);
    ui->table_carrinho->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->table_carrinho->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->table_carrinho->setStyleSheet("QTableView {selection-background-color:blue}");
    ui->table_carrinho->verticalHeader()->setVisible(false);

    //sets de quantidade minima e maxima
    ui->sb_quantidade->setMinimum(1);
    ui->sb_quantidade->setMaximum(1000);

    //iniciando com primeira linha selecionada (evitar crash do programa)
    ui->table_produtos->setCurrentItem(ui->table_produtos->item(0,0));

    //sets de valores iniciais
    ui->lbl_preco_total->setText("0");
    ui->lbl_qnt_itens->setText("0");

    //
    if(ui->lbl_qnt_itens->text().toInt() == 0){
        ui->btn_remover_produto->setEnabled(0);
    }else {
        ui->btn_remover_produto->setEnabled(1);
    }

    //iniciando a query com todos clientes do estoque
    QSqlQuery query2;
    query2.prepare("select * from tb_clientes");

    if(query2.exec()){
        while(query2.next()){
            ui->cb_clientes->addItem(query2.value(1).toString());
        }
    }
}


fm_realizar_venda::~fm_realizar_venda()
{
    delete ui;
}


void fm_realizar_venda::on_btn_adicionar_produtos_clicked()
{
    int quantidade = ui->sb_quantidade->text().toInt();
    QString id = ui->table_produtos->item(ui->table_produtos->currentRow(),0)->text();
    QString produto = ui->table_produtos->item(ui->table_produtos->currentRow(),1)->text();
    double preco = ui->table_produtos->item(ui->table_produtos->currentRow(),2)->text().toDouble();
    int estoque = ui->table_produtos->item(ui->table_produtos->currentRow(),3)->text().toInt();
    QString codigo = ui->table_produtos->item(ui->table_produtos->currentRow(),4)->text();

    double precoQuant = quantidade * preco;

    if(!(quantidade > estoque)){
        int novoEstoque = estoque - quantidade;
        ui->table_produtos->item(ui->table_produtos->currentRow(),3)->setText(QString::number(novoEstoque));

        int numLinhas = ui->table_carrinho->rowCount();
        int linhaCar = -1;

        //laço para achar linha, se ela existir
        for(int i=0;numLinhas > i; i++){
            QString idAux = ui->table_carrinho->item(i,0)->text();
            if(id == idAux){
                linhaCar = i;
                break;
            }
        }
        if(linhaCar >= 0){
            int quantidadeCar = ui->table_carrinho->item(linhaCar,3)->text().toInt();
            double precoCar = ui->table_carrinho->item(linhaCar,2)->text().toDouble();
            ui->table_carrinho->item(linhaCar,3)->setText(QString::number(quantidadeCar+quantidade));
            ui->table_carrinho->item(linhaCar,2)->setText(QString::number(precoCar+preco));
        }else{
            ui->table_carrinho->insertRow(0);
            ui->table_carrinho->setItem(0, 0, new QTableWidgetItem(id));
            ui->table_carrinho->setItem(0, 1, new QTableWidgetItem(produto));
            ui->table_carrinho->setItem(0, 2, new QTableWidgetItem(QString::number(precoQuant)));
            ui->table_carrinho->setItem(0, 3, new QTableWidgetItem(QString::number(quantidade)));
            ui->table_carrinho->setItem(0, 4, new QTableWidgetItem(codigo));
            ui->table_carrinho->setRowHeight(0, 20);
        }

        precoTotal += precoQuant;
        quantidadeTotal += quantidade;
        ui->lbl_preco_total->setText(QString::number(precoTotal));
        ui->lbl_qnt_itens->setText(QString::number(quantidadeTotal));

        ui->sb_quantidade->setValue(1);
    }else{
        QMessageBox::information(this, "Informativo", "Selecione uma quantidade válida para o estoque");
    }

    //verifica se tem ou não produto para remover do carrinho
    //para tornar ou não o botão remover inativo
    if(ui->lbl_qnt_itens->text().toInt() == 0){
        ui->btn_remover_produto->setEnabled(0);
    }else {
        ui->btn_remover_produto->setEnabled(1);
        ui->table_carrinho->setCurrentItem(ui->table_carrinho->item(0,0));
    }
}


void fm_realizar_venda::on_btn_remover_produto_clicked()
{
    //remover preco do produto na label_preco
    double preco = ui->table_carrinho->item(ui->table_carrinho->currentRow(),2)->text().toDouble();
    precoTotal = precoTotal - preco;
    ui->lbl_preco_total->setText(QString::number(precoTotal));

    //remover itens da label_itens
    int quantidadeCar = ui->table_carrinho->item(ui->table_carrinho->currentRow(),3)->text().toInt();
    quantidadeTotal = quantidadeTotal - quantidadeCar;
    ui->lbl_qnt_itens->setText(QString::number(quantidadeTotal));


    int idCar = ui->table_carrinho->item(ui->table_carrinho->currentRow(),0)->text().toInt();
    int numLinhas = ui->table_produtos->rowCount();
    int linhaProd = 0;

    //laço para achar linha
    for(int i=0;numLinhas > i; i++){
        int idAux = ui->table_produtos->item(i,0)->text().toInt();
        if(idCar == idAux){
            linhaProd = i;
            break;
        }
    }

    //inserir quantidade de itens de volta no estoque
    int quantidadeProd = ui->table_produtos->item(linhaProd, 3)->text().toInt();
    ui->table_produtos->item(linhaProd, 3)->setText(QString::number(quantidadeProd+quantidadeCar));

    if(ui->lbl_qnt_itens->text().toInt() == 0)
        ui->lbl_preco_total->setText("0");

    //apaga produto do carrinho
    int linha = ui->table_carrinho->currentRow();
    ui->table_carrinho->removeRow(linha);

    //verifica se tem ou não produto para remover do carrinho
    //para tornar ou não o botão remover inativo
    if(ui->lbl_qnt_itens->text().toInt() == 0){
        ui->btn_remover_produto->setEnabled(0);
    }else {
        ui->btn_remover_produto->setEnabled(1);
        ui->table_carrinho->setCurrentItem(ui->table_carrinho->item(0,0));
    }
}


void fm_realizar_venda::on_btn_cancelar_clicked()
{
    QMessageBox::StandardButton resposta;
    resposta = QMessageBox::question(this, "Confirmação", "Você deseja sair desta aba?");
    if(resposta == QMessageBox::Yes){
        close();
        precoTotal = 0;
        quantidadeTotal = 0;
    }
}


void fm_realizar_venda::on_btn_concluir_clicked()
{
    if(ui->table_carrinho->rowCount() > 0){
        QMessageBox::StandardButton confirma = QMessageBox::question(this, "Confirmação", "Deseja concluir a venda?");
        if(confirma == QMessageBox::Yes){
            int id = ui->table_produtos->item(ui->table_produtos->currentRow(),0)->text().toInt();
            int quantidade = ui->table_produtos->item(ui->table_produtos->currentRow(),3)->text().toInt();

            QSqlQuery query;
            query.prepare("update tb_estoque set quantidade=:quantidade where id="+QString::number(id));
            query.bindValue(":quantidade", quantidade);
            if(query.exec()){
                QMessageBox::information(this,"Venda concluída","Venda realizada com sucesso!");
                precoTotal = 0;
                quantidadeTotal = 0;
                close();
            }else{
                QMessageBox::warning(this,"Erro","Ocorreu um erro com a operação");
            }

            QSqlQuery query2;

            QString nome = ui->cb_clientes->currentText();
            QString valor = ui->lbl_preco_total->text();
            QString quantidadeVenda = ui->lbl_qnt_itens->text();

            query2.prepare("insert into tb_vendas (nome, valor, quantidade) values"
                          "('"+nome+"',:preco,:quantidade)");
            query2.bindValue(":preco", valor);
            query2.bindValue(":quantidade", quantidadeVenda);
            if(query2.exec()){
                QMessageBox::information(this,"Venda finalizada","Venda realizado com sucesso");
                close();
            }else{
                QMessageBox::warning(this,"Error","Ocorreu um erro com a venda");
            }
        } 
    }else{
        QMessageBox::information(this, "Aviso", "Nenhum produto no carrinho!");
    }

}

