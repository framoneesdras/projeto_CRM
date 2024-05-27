#ifndef HOSPEDE_H
#define HOSPEDE_H
#include "Cliente.h"
#include <string>

using std::string;

    // Classe Hospede deriva de Cliente

    class Hospede :  public Cliente
    {

    private:
        int ID_Hospede;


    public:

        Hospede(const string nm, const string gn, const string endr, const int cpf);

        ~Hospede();

        void fazerCheckin();
        void fazerCheckout();
};

#endif // HOSPEDE_H