#ifndef FM_LOGIN_H
#define FM_LOGIN_H

#include <QDialog>

namespace Ui {
class fm_login;
}

class fm_login : public QDialog
{
    Q_OBJECT

public:
    explicit fm_login(QWidget *parent = nullptr);
    ~fm_login();

private slots:
    void on_btn_login_entrar_clicked();

    void on_btn_login_sair_clicked();

private:
    Ui::fm_login *ui;
};

#endif // FM_LOGIN_H
