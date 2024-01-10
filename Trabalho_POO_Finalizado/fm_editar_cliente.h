#ifndef FM_EDITAR_CLIENTE_H
#define FM_EDITAR_CLIENTE_H

#include <QDialog>

namespace Ui {
class fm_editar_cliente;
}

class fm_editar_cliente : public QDialog
{
    Q_OBJECT

public:
    explicit fm_editar_cliente(QWidget *parent = nullptr, int id=0);
    ~fm_editar_cliente();

private slots:
    void on_btn_confirma_clicked();

    void on_btn_cancela_clicked();

private:
    Ui::fm_editar_cliente *ui;
};

#endif // FM_EDITAR_CLIENTE_H
