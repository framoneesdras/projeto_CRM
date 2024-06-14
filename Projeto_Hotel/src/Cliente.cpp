#include <iostream>
#include "Pessoa.h"
#include "Cliente.h"
#include <string>

using std::string;
using std::cout;
using std::endl;




    Cliente::Cliente(const string nome, const string cpf, const string telefone, const string email)
    : Pessoa(nome, cpf, telefone), email(email)

    {


    }


     Cliente::~Cliente()
    {
        cout << "Destruindo o Objeto" << endl;
    }

    string Cliente::getemail()
    {
        return email;
    }

    void Cliente::setemail(string email)
    {
        this->email = email;
    }

