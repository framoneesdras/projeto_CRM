#include <iostream>
#include "Pessoa.h"
#include <string>

using std::string;
using std::cout;
using std::endl;


    Pessoa::Pessoa(const string nome, const string cpf, const string telefone)
    {

        this->nome=nome;
        this->cpf=cpf;
        this->telefone=telefone;

    }

    Pessoa::~Pessoa()
    {
        cout << "Destruindo o Objeto" << endl;
    }

    string Pessoa::getnome()
    {

        return nome;

    }

    string Pessoa::getcpf()
    {

        return cpf;

    }

    string Pessoa::gettelefone()
    {

        return telefone;

    }

    string Pessoa::setnome()
    {

        this->nome = nome;

    }

    string Pessoa::setcpf()
    {

        this->cpf = cpf;

    }

    string Pessoa::settelefone()
    {
        this->telefone = telefone;
    }
