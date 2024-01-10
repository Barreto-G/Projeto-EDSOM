/********************************************************************************
** Form generated from reading UI file 'fm_realizar_venda.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_REALIZAR_VENDA_H
#define UI_FM_REALIZAR_VENDA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_fm_realizar_venda
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *table_produtos;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpinBox *sb_quantidade;
    QPushButton *btn_adicionar_produtos;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QTableWidget *table_carrinho;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_4;
    QLabel *lbl_preco_total;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_5;
    QLabel *lbl_qnt_itens;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_remover_produto;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_6;
    QComboBox *cb_clientes;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *btn_cancelar;
    QPushButton *btn_concluir;

    void setupUi(QDialog *fm_realizar_venda)
    {
        if (fm_realizar_venda->objectName().isEmpty())
            fm_realizar_venda->setObjectName("fm_realizar_venda");
        fm_realizar_venda->setEnabled(true);
        fm_realizar_venda->resize(600, 650);
        gridLayout = new QGridLayout(fm_realizar_venda);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(fm_realizar_venda);
        label->setObjectName("label");

        horizontalLayout_4->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_4);

        table_produtos = new QTableWidget(fm_realizar_venda);
        table_produtos->setObjectName("table_produtos");
        table_produtos->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout->addWidget(table_produtos);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(fm_realizar_venda);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);


        horizontalLayout_2->addLayout(horizontalLayout);

        sb_quantidade = new QSpinBox(fm_realizar_venda);
        sb_quantidade->setObjectName("sb_quantidade");
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sb_quantidade->sizePolicy().hasHeightForWidth());
        sb_quantidade->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(sb_quantidade);

        btn_adicionar_produtos = new QPushButton(fm_realizar_venda);
        btn_adicionar_produtos->setObjectName("btn_adicionar_produtos");

        horizontalLayout_2->addWidget(btn_adicionar_produtos);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_6->addLayout(verticalLayout);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_5->addItem(verticalSpacer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_3 = new QLabel(fm_realizar_venda);
        label_3->setObjectName("label_3");

        horizontalLayout_8->addWidget(label_3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_5);


        verticalLayout_4->addLayout(horizontalLayout_8);

        table_carrinho = new QTableWidget(fm_realizar_venda);
        table_carrinho->setObjectName("table_carrinho");

        verticalLayout_4->addWidget(table_carrinho);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_4 = new QLabel(fm_realizar_venda);
        label_4->setObjectName("label_4");
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(14);
        label_4->setFont(font);

        horizontalLayout_9->addWidget(label_4);

        lbl_preco_total = new QLabel(fm_realizar_venda);
        lbl_preco_total->setObjectName("lbl_preco_total");
        lbl_preco_total->setFont(font);

        horizontalLayout_9->addWidget(lbl_preco_total);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_7);

        label_5 = new QLabel(fm_realizar_venda);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        horizontalLayout_9->addWidget(label_5);

        lbl_qnt_itens = new QLabel(fm_realizar_venda);
        lbl_qnt_itens->setObjectName("lbl_qnt_itens");
        lbl_qnt_itens->setFont(font);

        horizontalLayout_9->addWidget(lbl_qnt_itens);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_6);


        verticalLayout_4->addLayout(horizontalLayout_9);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        btn_remover_produto = new QPushButton(fm_realizar_venda);
        btn_remover_produto->setObjectName("btn_remover_produto");
        btn_remover_produto->setEnabled(true);

        horizontalLayout_5->addWidget(btn_remover_produto);


        verticalLayout_2->addLayout(horizontalLayout_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer_3);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");

        verticalLayout_8->addLayout(horizontalLayout_12);


        verticalLayout_3->addLayout(verticalLayout_8);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_8);

        label_6 = new QLabel(fm_realizar_venda);
        label_6->setObjectName("label_6");

        horizontalLayout_11->addWidget(label_6);

        cb_clientes = new QComboBox(fm_realizar_venda);
        cb_clientes->setObjectName("cb_clientes");

        horizontalLayout_11->addWidget(cb_clientes);


        verticalLayout_7->addLayout(horizontalLayout_11);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);


        verticalLayout_3->addLayout(verticalLayout_7);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");

        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        btn_cancelar = new QPushButton(fm_realizar_venda);
        btn_cancelar->setObjectName("btn_cancelar");

        horizontalLayout_6->addWidget(btn_cancelar);

        btn_concluir = new QPushButton(fm_realizar_venda);
        btn_concluir->setObjectName("btn_concluir");

        horizontalLayout_6->addWidget(btn_concluir);


        horizontalLayout_7->addLayout(horizontalLayout_6);


        verticalLayout_3->addLayout(horizontalLayout_7);


        verticalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(verticalLayout_2);


        verticalLayout_5->addLayout(verticalLayout_4);


        verticalLayout_6->addLayout(verticalLayout_5);


        gridLayout->addLayout(verticalLayout_6, 0, 0, 1, 1);


        retranslateUi(fm_realizar_venda);

        QMetaObject::connectSlotsByName(fm_realizar_venda);
    } // setupUi

    void retranslateUi(QDialog *fm_realizar_venda)
    {
        fm_realizar_venda->setWindowTitle(QCoreApplication::translate("fm_realizar_venda", "Realizar venda", nullptr));
        label->setText(QCoreApplication::translate("fm_realizar_venda", "Produtos", nullptr));
        label_2->setText(QCoreApplication::translate("fm_realizar_venda", "Quantidade", nullptr));
        btn_adicionar_produtos->setText(QCoreApplication::translate("fm_realizar_venda", "Adicionar", nullptr));
        label_3->setText(QCoreApplication::translate("fm_realizar_venda", "Carrinho", nullptr));
        label_4->setText(QCoreApplication::translate("fm_realizar_venda", "Pre\303\247o total (R$) :", nullptr));
        lbl_preco_total->setText(QCoreApplication::translate("fm_realizar_venda", "dinheiros", nullptr));
        label_5->setText(QCoreApplication::translate("fm_realizar_venda", "Quantidade de Itens:", nullptr));
        lbl_qnt_itens->setText(QCoreApplication::translate("fm_realizar_venda", "itens", nullptr));
        btn_remover_produto->setText(QCoreApplication::translate("fm_realizar_venda", "Remover", nullptr));
        label_6->setText(QCoreApplication::translate("fm_realizar_venda", "Cliente", nullptr));
        btn_cancelar->setText(QCoreApplication::translate("fm_realizar_venda", "Cancelar", nullptr));
        btn_concluir->setText(QCoreApplication::translate("fm_realizar_venda", "Concluir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_realizar_venda: public Ui_fm_realizar_venda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_REALIZAR_VENDA_H
