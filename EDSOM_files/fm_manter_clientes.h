#ifndef FM_MANTER_CLIENTES_H
#define FM_MANTER_CLIENTES_H

#include <QDialog>

namespace Ui {
class fm_manter_clientes;
}

class fm_manter_clientes : public QDialog
{
    Q_OBJECT

public:
    explicit fm_manter_clientes(QWidget *parent = nullptr);
    ~fm_manter_clientes();
    void atualiza_estoque();

private slots:
    void on_btn_cadastrar_cliente_clicked();

    void on_btn_remover_cliente_clicked();

    void on_btnc_editar_cliente_clicked();

private:
    Ui::fm_manter_clientes *ui;
};

#endif // FM_MANTER_CLIENTES_H
