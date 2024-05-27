#ifndef CLIENTE_H
#define CLIENTE_H


#include "Pessoa.h"
#include <string>

using std::string;

    // Classe Cliente derivada de pessoa

    class Cliente : public Pessoa
    {

    private:

        int ID_Cliente;
        int tipo_Cliente; // 1 = Hospede , 2 = Cliente_

    public:


        Cliente(const string nm, const string gn, const string endr, const int cpf);

        ~Cliente();


        void conferirPreco();
        void realizarPagamento();

        void fazerReserva();
        void cancelarReserva();
        void disponibilidadeQuarto();
        void estenderReserva();
        void fazerCompras();
        void usarBar();
        void usarRestaurante();


};

#endif // CLIENTE_H
