#include <iostream>
#include "Cliente.h"
#include "Pessoa.h"
#include <string>

using std::string;
using std::cout;
using std::endl;




    Cliente::Cliente(const string nm, const string gn, const string endr, const int cpf) : Pessoa(nm, gn, endr, cpf)

    {


    }


     Cliente::~Cliente()
    {
        cout << "Destruindo o Objeto" << endl;
    }
