/********************************************************************************
** Form generated from reading UI file 'fm_manter_estoque.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_MANTER_ESTOQUE_H
#define UI_FM_MANTER_ESTOQUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_fm_manter_estoque
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_novo;
    QPushButton *btn_editar;
    QPushButton *btn_excluir;
    QTableWidget *tab_estoque;

    void setupUi(QDialog *fm_manter_estoque)
    {
        if (fm_manter_estoque->objectName().isEmpty())
            fm_manter_estoque->setObjectName("fm_manter_estoque");
        fm_manter_estoque->resize(600, 400);
        gridLayout = new QGridLayout(fm_manter_estoque);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btn_novo = new QPushButton(fm_manter_estoque);
        btn_novo->setObjectName("btn_novo");

        horizontalLayout->addWidget(btn_novo);

        btn_editar = new QPushButton(fm_manter_estoque);
        btn_editar->setObjectName("btn_editar");

        horizontalLayout->addWidget(btn_editar);

        btn_excluir = new QPushButton(fm_manter_estoque);
        btn_excluir->setObjectName("btn_excluir");

        horizontalLayout->addWidget(btn_excluir);


        verticalLayout->addLayout(horizontalLayout);

        tab_estoque = new QTableWidget(fm_manter_estoque);
        tab_estoque->setObjectName("tab_estoque");

        verticalLayout->addWidget(tab_estoque);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(fm_manter_estoque);

        QMetaObject::connectSlotsByName(fm_manter_estoque);
    } // setupUi

    void retranslateUi(QDialog *fm_manter_estoque)
    {
        fm_manter_estoque->setWindowTitle(QCoreApplication::translate("fm_manter_estoque", "Estoque", nullptr));
        btn_novo->setText(QCoreApplication::translate("fm_manter_estoque", "Novo Produto", nullptr));
        btn_editar->setText(QCoreApplication::translate("fm_manter_estoque", "Editar Produto", nullptr));
        btn_excluir->setText(QCoreApplication::translate("fm_manter_estoque", "Excluir Produto", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_manter_estoque: public Ui_fm_manter_estoque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_MANTER_ESTOQUE_H
