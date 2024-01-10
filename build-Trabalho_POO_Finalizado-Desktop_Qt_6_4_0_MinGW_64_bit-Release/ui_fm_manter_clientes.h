/********************************************************************************
** Form generated from reading UI file 'fm_manter_clientes.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_MANTER_CLIENTES_H
#define UI_FM_MANTER_CLIENTES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_manter_clientes
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_cadastrar_cliente;
    QPushButton *btnc_editar_cliente;
    QPushButton *btn_remover_cliente;
    QTableWidget *tb_clientes;

    void setupUi(QDialog *fm_manter_clientes)
    {
        if (fm_manter_clientes->objectName().isEmpty())
            fm_manter_clientes->setObjectName("fm_manter_clientes");
        fm_manter_clientes->resize(553, 452);
        layoutWidget = new QWidget(fm_manter_clientes);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 531, 431));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btn_cadastrar_cliente = new QPushButton(layoutWidget);
        btn_cadastrar_cliente->setObjectName("btn_cadastrar_cliente");

        horizontalLayout->addWidget(btn_cadastrar_cliente);

        btnc_editar_cliente = new QPushButton(layoutWidget);
        btnc_editar_cliente->setObjectName("btnc_editar_cliente");

        horizontalLayout->addWidget(btnc_editar_cliente);

        btn_remover_cliente = new QPushButton(layoutWidget);
        btn_remover_cliente->setObjectName("btn_remover_cliente");

        horizontalLayout->addWidget(btn_remover_cliente);


        verticalLayout->addLayout(horizontalLayout);

        tb_clientes = new QTableWidget(layoutWidget);
        tb_clientes->setObjectName("tb_clientes");

        verticalLayout->addWidget(tb_clientes);


        retranslateUi(fm_manter_clientes);

        QMetaObject::connectSlotsByName(fm_manter_clientes);
    } // setupUi

    void retranslateUi(QDialog *fm_manter_clientes)
    {
        fm_manter_clientes->setWindowTitle(QCoreApplication::translate("fm_manter_clientes", "Clientes", nullptr));
        btn_cadastrar_cliente->setText(QCoreApplication::translate("fm_manter_clientes", "Cadastrar Cliente", nullptr));
        btnc_editar_cliente->setText(QCoreApplication::translate("fm_manter_clientes", "Editar Cliente", nullptr));
        btn_remover_cliente->setText(QCoreApplication::translate("fm_manter_clientes", "Remover Cliente", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_manter_clientes: public Ui_fm_manter_clientes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_MANTER_CLIENTES_H
