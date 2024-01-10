#ifndef CLIENTE_H
#define CLIENTE_H

#include <QString>
#include <QVector>
#include "pessoa.h"
#include "produto.h"

class Cliente : public Pessoa
{
private:
    int numCliente;
public:
    QVector<Produto> historicoVendas;

    Cliente(){};
    Cliente(int num, QString nom, QString cp, QString r, QString sex, QString dt): Pessoa(nom, cp,r, sex, dt), numCliente(num){};
    ~Cliente(){}

    int getNumCliente();
};

#endif // CLIENTE_H
