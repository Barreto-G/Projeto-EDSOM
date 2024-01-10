#ifndef FM_PRINCIPAL_H
#define FM_PRINCIPAL_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class fm_principal; }
QT_END_NAMESPACE

class fm_principal : public QMainWindow
{
    Q_OBJECT

public:
    fm_principal(QWidget *parent = nullptr);
    ~fm_principal();

private slots:
    void on_btn_realizar_venda_clicked();

    void on_btn_manter_estoque_clicked();

    void on_btn_manter_clientes_clicked();

    void on_actionRelat_rio_de_Vendas_triggered();

    void on_actionFechar_triggered();

private:
    Ui::fm_principal *ui;
};
#endif // FM_PRINCIPAL_H
