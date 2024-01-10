#ifndef FM_CADASTRAR_CLIENTE_H
#define FM_CADASTRAR_CLIENTE_H

#include <QDialog>

namespace Ui {
class fm_cadastrar_cliente;
}

class fm_cadastrar_cliente : public QDialog
{
    Q_OBJECT

public:
    explicit fm_cadastrar_cliente(QWidget *parent = nullptr);
    ~fm_cadastrar_cliente();

private slots:
    void on_btn_confirma_clicked();

    void on_btn_cancela_clicked();

private:
    Ui::fm_cadastrar_cliente *ui;
};

#endif // FM_CADASTRAR_CLIENTE_H
