/********************************************************************************
** Form generated from reading UI file 'fm_editar_produto.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_EDITAR_PRODUTO_H
#define UI_FM_EDITAR_PRODUTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_fm_editar_produto
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *ln_name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *bx_valor;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *bx_quantidade;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *ln_codigo;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_confirma;
    QPushButton *btn_cancelar;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *fm_editar_produto)
    {
        if (fm_editar_produto->objectName().isEmpty())
            fm_editar_produto->setObjectName("fm_editar_produto");
        fm_editar_produto->resize(400, 205);
        gridLayout = new QGridLayout(fm_editar_produto);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(fm_editar_produto);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        ln_name = new QLineEdit(fm_editar_produto);
        ln_name->setObjectName("ln_name");

        horizontalLayout->addWidget(ln_name);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(fm_editar_produto);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        bx_valor = new QDoubleSpinBox(fm_editar_produto);
        bx_valor->setObjectName("bx_valor");

        horizontalLayout_2->addWidget(bx_valor);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(fm_editar_produto);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        bx_quantidade = new QSpinBox(fm_editar_produto);
        bx_quantidade->setObjectName("bx_quantidade");

        horizontalLayout_3->addWidget(bx_quantidade);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(fm_editar_produto);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        ln_codigo = new QLineEdit(fm_editar_produto);
        ln_codigo->setObjectName("ln_codigo");

        horizontalLayout_4->addWidget(ln_codigo);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        btn_confirma = new QPushButton(fm_editar_produto);
        btn_confirma->setObjectName("btn_confirma");

        horizontalLayout_5->addWidget(btn_confirma);

        btn_cancelar = new QPushButton(fm_editar_produto);
        btn_cancelar->setObjectName("btn_cancelar");

        horizontalLayout_5->addWidget(btn_cancelar);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_5);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(fm_editar_produto);

        QMetaObject::connectSlotsByName(fm_editar_produto);
    } // setupUi

    void retranslateUi(QDialog *fm_editar_produto)
    {
        fm_editar_produto->setWindowTitle(QCoreApplication::translate("fm_editar_produto", "Modificar produto", nullptr));
        label->setText(QCoreApplication::translate("fm_editar_produto", "Nome do produto", nullptr));
        label_2->setText(QCoreApplication::translate("fm_editar_produto", "Valor", nullptr));
        label_3->setText(QCoreApplication::translate("fm_editar_produto", "Quantidade", nullptr));
        label_4->setText(QCoreApplication::translate("fm_editar_produto", "Codigo", nullptr));
        btn_confirma->setText(QCoreApplication::translate("fm_editar_produto", "Confirmar", nullptr));
        btn_cancelar->setText(QCoreApplication::translate("fm_editar_produto", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_editar_produto: public Ui_fm_editar_produto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_EDITAR_PRODUTO_H
