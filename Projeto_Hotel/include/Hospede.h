#ifndef CLIENTE_H
#define CLIENTE_H


#include "Pessoa.h"
#include <string>

using std::string;

    // Classe Cliente derivada de pessoa

    class Cliente : public Pessoa
    {

    private:

        string email;
        //int ID_Cliente;
        //int tipo_Cliente; // 1 = Hospede , 2 = Cliente_

    public:


        Cliente(const string nome, const string cpf, const string telefone, const string email);

        ~Cliente();

        string getemail();
        void setemail(string email);


};

#endif // CLIENTE_H
