/********************************************************************************
** Form generated from reading UI file 'fm_principal.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_PRINCIPAL_H
#define UI_FM_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_principal
{
public:
    QAction *actionRelat_rio_de_Vendas;
    QAction *actionFechar;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btn_realizar_venda;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btn_manter_estoque;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *btn_manter_clientes;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *fm_principal)
    {
        if (fm_principal->objectName().isEmpty())
            fm_principal->setObjectName("fm_principal");
        fm_principal->resize(577, 400);
        actionRelat_rio_de_Vendas = new QAction(fm_principal);
        actionRelat_rio_de_Vendas->setObjectName("actionRelat_rio_de_Vendas");
        actionFechar = new QAction(fm_principal);
        actionFechar->setObjectName("actionFechar");
        centralwidget = new QWidget(fm_principal);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Perpetua")});
        font.setPointSize(40);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        font.setStrikeOut(false);
        label->setFont(font);

        horizontalLayout_5->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        verticalLayout_5->addLayout(verticalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setMaximumSize(QSize(60, 50));
        label_5->setLayoutDirection(Qt::LeftToRight);
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/imgs/imagens/realizar-venda.png")));
        label_5->setScaledContents(true);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_3);

        btn_realizar_venda = new QPushButton(centralwidget);
        btn_realizar_venda->setObjectName("btn_realizar_venda");
        btn_realizar_venda->setStyleSheet(QString::fromUtf8("background:#248;\n"
"color:#fff;\n"
"border:none;\n"
"border-radius:10px;\n"
"font-size:13pt"));

        verticalLayout_2->addWidget(btn_realizar_venda);


        horizontalLayout_4->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setMaximumSize(QSize(60, 50));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/imgs/imagens/cadastrar-produto.png")));
        label_6->setScaledContents(true);
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_6);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout);

        btn_manter_estoque = new QPushButton(centralwidget);
        btn_manter_estoque->setObjectName("btn_manter_estoque");
        btn_manter_estoque->setStyleSheet(QString::fromUtf8("background:#248;\n"
"color:#fff;\n"
"border:none;\n"
"border-radius:10px;\n"
"font-size:13pt"));

        verticalLayout->addWidget(btn_manter_estoque);


        horizontalLayout_4->addLayout(verticalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setMaximumSize(QSize(60, 50));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/imgs/imagens/adicionar-usuario.png")));
        label_7->setScaledContents(true);
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_7);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);


        verticalLayout_4->addLayout(horizontalLayout_2);

        btn_manter_clientes = new QPushButton(centralwidget);
        btn_manter_clientes->setObjectName("btn_manter_clientes");
        btn_manter_clientes->setStyleSheet(QString::fromUtf8("background:#248;\n"
"color:#fff;\n"
"border:none;\n"
"border-radius:10px;\n"
"font-size:13pt"));

        verticalLayout_4->addWidget(btn_manter_clientes);


        horizontalLayout_4->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout_5, 0, 0, 1, 1);

        fm_principal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(fm_principal);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 577, 21));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName("menuMenu");
        fm_principal->setMenuBar(menubar);
        statusbar = new QStatusBar(fm_principal);
        statusbar->setObjectName("statusbar");
        fm_principal->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionRelat_rio_de_Vendas);
        menuMenu->addSeparator();
        menuMenu->addAction(actionFechar);

        retranslateUi(fm_principal);

        QMetaObject::connectSlotsByName(fm_principal);
    } // setupUi

    void retranslateUi(QMainWindow *fm_principal)
    {
        fm_principal->setWindowTitle(QCoreApplication::translate("fm_principal", "EDSOM", nullptr));
        actionRelat_rio_de_Vendas->setText(QCoreApplication::translate("fm_principal", "Relat\303\263rio de Vendas", nullptr));
        actionFechar->setText(QCoreApplication::translate("fm_principal", "Fechar", nullptr));
        label->setText(QCoreApplication::translate("fm_principal", "EDSOM", nullptr));
        label_5->setText(QString());
        btn_realizar_venda->setText(QCoreApplication::translate("fm_principal", "Realizar Venda", nullptr));
        label_6->setText(QString());
        btn_manter_estoque->setText(QCoreApplication::translate("fm_principal", "Manter Estoques", nullptr));
        label_7->setText(QString());
        btn_manter_clientes->setText(QCoreApplication::translate("fm_principal", "Manter Clientes", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("fm_principal", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_principal: public Ui_fm_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_PRINCIPAL_H
