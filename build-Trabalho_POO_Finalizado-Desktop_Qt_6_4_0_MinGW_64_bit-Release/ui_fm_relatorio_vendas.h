/********************************************************************************
** Form generated from reading UI file 'fm_relatorio_vendas.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_RELATORIO_VENDAS_H
#define UI_FM_RELATORIO_VENDAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_fm_relatorio_vendas
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *table_relatorio;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_voltar;

    void setupUi(QDialog *fm_relatorio_vendas)
    {
        if (fm_relatorio_vendas->objectName().isEmpty())
            fm_relatorio_vendas->setObjectName("fm_relatorio_vendas");
        fm_relatorio_vendas->resize(523, 400);
        gridLayout = new QGridLayout(fm_relatorio_vendas);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(fm_relatorio_vendas);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(16);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        table_relatorio = new QTableWidget(fm_relatorio_vendas);
        table_relatorio->setObjectName("table_relatorio");

        verticalLayout->addWidget(table_relatorio);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btn_voltar = new QPushButton(fm_relatorio_vendas);
        btn_voltar->setObjectName("btn_voltar");

        horizontalLayout_2->addWidget(btn_voltar);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(fm_relatorio_vendas);

        QMetaObject::connectSlotsByName(fm_relatorio_vendas);
    } // setupUi

    void retranslateUi(QDialog *fm_relatorio_vendas)
    {
        fm_relatorio_vendas->setWindowTitle(QCoreApplication::translate("fm_relatorio_vendas", "Vendas", nullptr));
        label->setText(QCoreApplication::translate("fm_relatorio_vendas", "Relat\303\263rios de Vendas", nullptr));
        btn_voltar->setText(QCoreApplication::translate("fm_relatorio_vendas", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_relatorio_vendas: public Ui_fm_relatorio_vendas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_RELATORIO_VENDAS_H
