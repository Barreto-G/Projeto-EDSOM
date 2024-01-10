#ifndef FM_RELATORIO_VENDAS_H
#define FM_RELATORIO_VENDAS_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class fm_relatorio_vendas;
}

class fm_relatorio_vendas : public QDialog
{
    Q_OBJECT

public:
    explicit fm_relatorio_vendas(QWidget *parent = nullptr);
    ~fm_relatorio_vendas();

private slots:
    void on_btn_voltar_clicked();

private:
    Ui::fm_relatorio_vendas *ui;
};

#endif // FM_RELATORIO_VENDAS_H
