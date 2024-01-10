#ifndef PRODUTO_H
#define PRODUTO_H

#include<QString>


class Produto
{
    protected:
    QString nome, codigo;
    double valor;
    int quantidade;
    
    public:
        Produto(){};
        Produto(QString nom_p, double val, QString cod, int qnt): nome(nom_p), codigo(cod), valor(val), quantidade(qnt){};
        ~Produto(){}

    QString getNome();
    void setNome(QString nom_p);   

    double getValor();
    void setValor(double val);

    QString getCodigo();
    void setCodigo(QString cod);

    int getQuantidade();
    void setQuantidade(int qnt);

};

#endif // PRODUTO_H
