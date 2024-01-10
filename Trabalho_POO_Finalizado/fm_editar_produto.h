#ifndef FM_EDITAR_PRODUTO_H
#define FM_EDITAR_PRODUTO_H

#include <QDialog>

namespace Ui {
class fm_editar_produto;
}

class fm_editar_produto : public QDialog
{
    Q_OBJECT

public:
    explicit fm_editar_produto(QWidget *parent = nullptr, int id =0);
    ~fm_editar_produto();

private slots:
    void on_btn_confirma_clicked();

    void on_btn_cancelar_clicked();

private:
    Ui::fm_editar_produto *ui;
};

#endif // FM_EDITAR_PRODUTO_H
