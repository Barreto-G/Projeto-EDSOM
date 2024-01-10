/********************************************************************************
** Form generated from reading UI file 'fm_login.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_LOGIN_H
#define UI_FM_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_fm_login
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QLineEdit *txt_login;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *txt_senha;
    QSpacerItem *verticalSpacer;
    QPushButton *btn_login_entrar;
    QPushButton *btn_login_sair;

    void setupUi(QDialog *fm_login)
    {
        if (fm_login->objectName().isEmpty())
            fm_login->setObjectName("fm_login");
        fm_login->resize(300, 300);
        gridLayout = new QGridLayout(fm_login);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        label = new QLabel(fm_login);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(15);
        label->setFont(font);

        horizontalLayout_4->addWidget(label);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(fm_login);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(13);
        label_2->setFont(font1);

        horizontalLayout_3->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        txt_login = new QLineEdit(fm_login);
        txt_login->setObjectName("txt_login");

        horizontalLayout_3->addWidget(txt_login);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(fm_login);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        txt_senha = new QLineEdit(fm_login);
        txt_senha->setObjectName("txt_senha");
        txt_senha->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(txt_senha);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 82, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        btn_login_entrar = new QPushButton(fm_login);
        btn_login_entrar->setObjectName("btn_login_entrar");
        btn_login_entrar->setStyleSheet(QString::fromUtf8("background:#248;\n"
"color:#fff;\n"
"border:none;\n"
"border-radius:10px;\n"
"font-size:13pt"));

        verticalLayout_2->addWidget(btn_login_entrar);

        btn_login_sair = new QPushButton(fm_login);
        btn_login_sair->setObjectName("btn_login_sair");
        btn_login_sair->setStyleSheet(QString::fromUtf8("background:#B22222;\n"
"color:#fff;\n"
"border:none;\n"
"border-radius:10px;\n"
"font-size:13pt"));

        verticalLayout_2->addWidget(btn_login_sair);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        retranslateUi(fm_login);

        QMetaObject::connectSlotsByName(fm_login);
    } // setupUi

    void retranslateUi(QDialog *fm_login)
    {
        fm_login->setWindowTitle(QCoreApplication::translate("fm_login", "Login", nullptr));
        label->setText(QCoreApplication::translate("fm_login", "Tela de Login", nullptr));
        label_2->setText(QCoreApplication::translate("fm_login", "Login", nullptr));
        label_3->setText(QCoreApplication::translate("fm_login", "Senha", nullptr));
        btn_login_entrar->setText(QCoreApplication::translate("fm_login", "Entrar", nullptr));
        btn_login_sair->setText(QCoreApplication::translate("fm_login", "Sair", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_login: public Ui_fm_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_LOGIN_H
