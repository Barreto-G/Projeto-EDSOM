#ifndef FM_REALIZAR_VENDA_H
#define FM_REALIZAR_VENDA_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>

namespace Ui {
class fm_realizar_venda;
}

class fm_realizar_venda : public QDialog
{
    Q_OBJECT

public:
    explicit fm_realizar_venda(QWidget *parent = nullptr);
    ~fm_realizar_venda();

private slots:
    void on_btn_adicionar_produtos_clicked();

    void on_btn_remover_produto_clicked();

    void on_btn_cancelar_clicked();

    void on_btn_concluir_clicked();

private:
    Ui::fm_realizar_venda *ui;
};

#endif // FM_REALIZAR_VENDA_H
