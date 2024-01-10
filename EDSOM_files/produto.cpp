#include "produto.h"
#include<QString>

QString Produto::getNome(){
    return Produto::nome;
}

void Produto::setNome(QString nom_p){
    nome = nom_p;
}

double Produto::getValor(){
    return Produto::valor;
}

void Produto::setValor(double val){
    valor = val;
}

QString Produto:: getCodigo(){
    return Produto::codigo;
}

int Produto:: getQuantidade(){
    return Produto::quantidade;
}

void Produto::setQuantidade(int qnt){
    Produto::quantidade = qnt;
}

void Produto::setCodigo(QString cod){
    Produto::codigo = cod;
}
