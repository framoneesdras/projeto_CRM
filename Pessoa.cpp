#include <iostream>
#include "Pessoa.h"
#include <string>

using std::string;
using std::cout;
using std::endl;


    Pessoa::Pessoa(const string nm, const string gn, const string endr, const int cpf)
    {

        this->nome=nm;
        this->genero=gn;
        this->endereco;
        this->cpf=cpf;

    }

    string Pessoa::getnome()
    {

        return nome;

    }

    string Pessoa::getgenero()
    {

        return genero;

    }

    string Pessoa::getendereco()
    {

        return endereco;

    }

    int Pessoa::getcpf()
    {

        return cpf;

    }

    int Pessoa::gettipo(){

        return tipo;

    }


    Pessoa::~Pessoa()
    {
        cout << "Destruindo o Objeto" << endl;
    }
