#ifndef FM_MANTER_ESTOQUE_H
#define FM_MANTER_ESTOQUE_H

#include <QDialog>

namespace Ui {
class fm_manter_estoque;
}

class fm_manter_estoque : public QDialog
{
    Q_OBJECT

public:
    explicit fm_manter_estoque(QWidget *parent = nullptr);
    ~fm_manter_estoque();

private slots:
    void on_btn_novo_clicked();

    void on_btn_excluir_clicked();

    void on_btn_editar_clicked();

    void atualiza_estoque();

private:
    Ui::fm_manter_estoque *ui;
};

#endif // FM_MANTER_ESTOQUE_H
