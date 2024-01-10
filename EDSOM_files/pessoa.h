#ifndef PESSOA_H
#define PESSOA_H

#include<QString>
#include<QDate>


class Pessoa
{
    protected:
        QString nome, cpf, telefone, endereco, cidade,rg,email, sexo, dt_nascimento;

    public:
        Pessoa(){};
        Pessoa(QString nom, QString cp, QString r, QString sex, QString dt): nome(nom), cpf(cp), rg(r), sexo(sex), dt_nascimento(dt){};
        ~Pessoa(){}

        QString getNome();
        void setNome(QString name);

        QString getCPF();
        QString getRG();
        QString getSexo();

        QString getTelefone();
        void setTelefone(QString tel);

        QString getEndereco();
        void setEndereco(QString enderesso);

        QString getCidade();
        void setCidade(QString city);

        QString getEmail();
        void setEmail(QString e_mail);

        QString getDataNascimento();

};

#endif // PESSOA_H
