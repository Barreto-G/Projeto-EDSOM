/********************************************************************************
** Form generated from reading UI file 'fm_editar_cliente.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_EDITAR_CLIENTE_H
#define UI_FM_EDITAR_CLIENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_editar_cliente
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *ln_nome;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *ln_rg;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *ln_CPF;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLineEdit *ln_dt;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *ln_sexo;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *ln_tel;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *ln_email;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *ln_endereco;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *ln_cidade;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *btn_confirma;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_cancela;

    void setupUi(QDialog *fm_editar_cliente)
    {
        if (fm_editar_cliente->objectName().isEmpty())
            fm_editar_cliente->setObjectName("fm_editar_cliente");
        fm_editar_cliente->resize(671, 407);
        layoutWidget = new QWidget(fm_editar_cliente);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 20, 631, 371));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        ln_nome = new QLineEdit(layoutWidget);
        ln_nome->setObjectName("ln_nome");

        horizontalLayout->addWidget(ln_nome);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        ln_rg = new QLineEdit(layoutWidget);
        ln_rg->setObjectName("ln_rg");

        horizontalLayout_2->addWidget(ln_rg);


        horizontalLayout_10->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        ln_CPF = new QLineEdit(layoutWidget);
        ln_CPF->setObjectName("ln_CPF");

        horizontalLayout_3->addWidget(ln_CPF);


        horizontalLayout_10->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");

        horizontalLayout_9->addWidget(label_9);

        ln_dt = new QLineEdit(layoutWidget);
        ln_dt->setObjectName("ln_dt");

        horizontalLayout_9->addWidget(ln_dt);


        horizontalLayout_11->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");

        horizontalLayout_8->addWidget(label_8);

        ln_sexo = new QLineEdit(layoutWidget);
        ln_sexo->setObjectName("ln_sexo");

        horizontalLayout_8->addWidget(ln_sexo);


        horizontalLayout_11->addLayout(horizontalLayout_8);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        ln_tel = new QLineEdit(layoutWidget);
        ln_tel->setObjectName("ln_tel");

        horizontalLayout_4->addWidget(ln_tel);


        horizontalLayout_12->addLayout(horizontalLayout_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        horizontalLayout_7->addWidget(label_7);

        ln_email = new QLineEdit(layoutWidget);
        ln_email->setObjectName("ln_email");

        horizontalLayout_7->addWidget(ln_email);


        horizontalLayout_12->addLayout(horizontalLayout_7);


        verticalLayout->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        horizontalLayout_6->addWidget(label_6);

        ln_endereco = new QLineEdit(layoutWidget);
        ln_endereco->setObjectName("ln_endereco");

        horizontalLayout_6->addWidget(ln_endereco);


        horizontalLayout_13->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        ln_cidade = new QLineEdit(layoutWidget);
        ln_cidade->setObjectName("ln_cidade");

        horizontalLayout_5->addWidget(ln_cidade);


        horizontalLayout_13->addLayout(horizontalLayout_5);


        verticalLayout->addLayout(horizontalLayout_13);

        verticalSpacer = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        btn_confirma = new QPushButton(layoutWidget);
        btn_confirma->setObjectName("btn_confirma");

        horizontalLayout_14->addWidget(btn_confirma);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer);

        btn_cancela = new QPushButton(layoutWidget);
        btn_cancela->setObjectName("btn_cancela");

        horizontalLayout_14->addWidget(btn_cancela);


        verticalLayout->addLayout(horizontalLayout_14);


        retranslateUi(fm_editar_cliente);

        QMetaObject::connectSlotsByName(fm_editar_cliente);
    } // setupUi

    void retranslateUi(QDialog *fm_editar_cliente)
    {
        fm_editar_cliente->setWindowTitle(QCoreApplication::translate("fm_editar_cliente", "Modificar clientes", nullptr));
        label->setText(QCoreApplication::translate("fm_editar_cliente", "Nome: ", nullptr));
        label_2->setText(QCoreApplication::translate("fm_editar_cliente", "RG:", nullptr));
        label_3->setText(QCoreApplication::translate("fm_editar_cliente", "CPF: ", nullptr));
        label_9->setText(QCoreApplication::translate("fm_editar_cliente", "Data de Nascimento: ", nullptr));
        label_8->setText(QCoreApplication::translate("fm_editar_cliente", "Sexo: ", nullptr));
        label_4->setText(QCoreApplication::translate("fm_editar_cliente", "Telefone: ", nullptr));
        label_7->setText(QCoreApplication::translate("fm_editar_cliente", "e-mail: ", nullptr));
        label_6->setText(QCoreApplication::translate("fm_editar_cliente", "Endere\303\247o: ", nullptr));
        label_5->setText(QCoreApplication::translate("fm_editar_cliente", "Cidade: ", nullptr));
        btn_confirma->setText(QCoreApplication::translate("fm_editar_cliente", "Confirma", nullptr));
        btn_cancela->setText(QCoreApplication::translate("fm_editar_cliente", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_editar_cliente: public Ui_fm_editar_cliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_EDITAR_CLIENTE_H
