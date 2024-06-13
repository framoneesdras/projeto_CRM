#include <iostream>
#include "Cliente.h"
#include "Hospede.h"
#include <string>

using std::string;
using std::cout;
using std::endl;


    Hospede::Hospede(const string nome, const string cpf, const string telefone, const string email)
    : Cliente (nome, cpf, telefone, email)

    {


    }

    Hospede::~Hospede()
    {
        cout << "Destruindo o Objeto" << endl;
    }

    void Hospede::addReserva(string reserva)
    {
        historicoReserva.push_back(reserva);
    }

    vector<string> Hospede::gethistoricoReserva()
    {
        return historicoReserva;
    }
