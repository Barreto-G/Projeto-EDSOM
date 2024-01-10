#include "pessoa.h"
#include<QString>


QString Pessoa::getNome(){
    return Pessoa::nome;
}

void Pessoa::setNome(QString name){
    nome = name;
}

QString Pessoa::getCPF(){
	return Pessoa::cpf;
}

QString Pessoa::getRG(){
	return Pessoa::rg;
}

QString Pessoa::getSexo(){
	return Pessoa::sexo;
}

QString Pessoa::getTelefone(){
	return Pessoa::telefone;
}

void Pessoa::setTelefone(QString tel){
	telefone = tel;
}

QString Pessoa::getEndereco(){
	return Pessoa::endereco;
}

void Pessoa::setEndereco(QString enderesso){
	endereco = enderesso;
}

QString Pessoa::getCidade(){
	return Pessoa::cidade;
}

void Pessoa::setCidade(QString city){
	cidade = city;
}

QString Pessoa::getEmail(){
	return Pessoa::email;
}

void Pessoa::setEmail(QString e_mail){
	email = e_mail;
}

QString Pessoa::getDataNascimento(){
	return Pessoa::dt_nascimento;
}
