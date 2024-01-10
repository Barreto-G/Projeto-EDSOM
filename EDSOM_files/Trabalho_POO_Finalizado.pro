QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    fm_cadastrar_cliente.cpp \
    fm_cadastro_produto.cpp \
    fm_editar_cliente.cpp \
    fm_editar_produto.cpp \
    fm_login.cpp \
    fm_manter_clientes.cpp \
    fm_manter_estoque.cpp \
    fm_realizar_venda.cpp \
    fm_relatorio_vendas.cpp \
    main.cpp \
    pessoa.cpp \
    cliente.cpp \
    produto.cpp \
    fm_principal.cpp

HEADERS += \
    fm_cadastrar_cliente.h \
    fm_cadastro_produto.h \
    fm_editar_cliente.h \
    fm_editar_produto.h \
    fm_login.h \
    fm_manter_clientes.h \
    fm_manter_estoque.h \
    fm_principal.h \
    fm_relatorio_vendas.h \
    pessoa.h \
    cliente.h \
    produto.h \
    fm_realizar_venda.h


FORMS += \
    fm_cadastrar_cliente.ui \
    fm_cadastro_produto.ui \
    fm_editar_cliente.ui \
    fm_editar_produto.ui \
    fm_login.ui \
    fm_manter_clientes.ui \
    fm_manter_estoque.ui \
    fm_principal.ui \
    fm_realizar_venda.ui \
    fm_relatorio_vendas.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    arquivo_de_recursos.qrc

