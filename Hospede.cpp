#include <iostream>
#include "Cliente.h"
#include "Hospede.h"
#include <string>

using std::string;
using std::cout;
using std::endl;


    Hospede::Hospede(const string nm, const string gn, const string endr, const int cpf): Cliente (nm, gn, endr, cpf)

    {


    }

    Hospede::~Hospede()
    {
        cout << "Destruindo o Objeto" << endl;
    }
