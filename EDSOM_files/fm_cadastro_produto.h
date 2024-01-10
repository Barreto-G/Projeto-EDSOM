#ifndef FM_CADASTRO_PRODUTO_H
#define FM_CADASTRO_PRODUTO_H

#include <QDialog>
#include <QtSql>
#include <QDebug>

namespace Ui {
class fm_cadastro_produto;
}

class fm_cadastro_produto : public QDialog
{
    Q_OBJECT

public:
    explicit fm_cadastro_produto(QWidget *parent = nullptr);
    ~fm_cadastro_produto();

private slots:
    void on_btn_confirma_clicked();

    void on_btn_cancelar_clicked();

private:
    Ui::fm_cadastro_produto *ui;
};

#endif // FM_CADASTRO_PRODUTO_H
