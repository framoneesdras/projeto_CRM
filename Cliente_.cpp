#include <iostream>
#include "Cliente.h"
#include "Cliente_.h"
#include <string>

using std::string;
using std::cout;
using std::endl;


    Cliente_::Cliente_(const string nm, const string gn, const string endr, const int cpf): Cliente (nm, gn, endr, cpf)

    {


    }

    Cliente_::~Cliente_()
    {
        cout << "Destruindo o Objeto" << endl;
    }
