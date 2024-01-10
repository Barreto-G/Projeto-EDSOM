#include "fm_login.h"
#include "ui_fm_login.h"
#include "QMessageBox"

fm_login::fm_login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_login)
{
    ui->setupUi(this);

    //bloqueia o botão fechar
    setWindowFlags(Qt::Window | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint);

    //para facilitar
    ui->txt_login->setText("admin");
    ui->txt_senha->setText("admin");
}

fm_login::~fm_login()
{
    delete ui;
}

void fm_login::on_btn_login_entrar_clicked()
{
    if(ui->txt_login->text() == "admin" && ui->txt_senha->text() == "admin"){
        close();
    }else{
        ui->txt_login->clear();
        ui->txt_senha->clear();
        QMessageBox::information(this,"Erro", "Senha ou usuário incorretos");
    }
}


void fm_login::on_btn_login_sair_clicked()
{
    QMessageBox::StandardButton resposta;
    resposta = QMessageBox::question(this, "Confirmação", "Deseja fechar o programa?");
    if(resposta == QMessageBox::Yes){
        exit(0);
    }
}

