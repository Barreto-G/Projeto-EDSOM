#ifndef ADD_CLIENTE_H
#define ADD_CLIENTE_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class add_cliente;
}

class add_cliente : public QDialog
{
    Q_OBJECT

public:
    explicit add_cliente(QWidget *parent = nullptr);
    ~add_cliente();

private slots:
    void on_btn_adicionar_clicked();

private:
    Ui::add_cliente *ui;
};

#endif // ADD_CLIENTE_H
