#include <iostream>
#include <string>
#include <vector>
#include "../include/Cliente.h"
#include "../include/Hospede.h"

using namespace std;

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

std::vector<string> Hospede::gethistoricoReserva()
{
    return historicoReserva;
}

string Hospede::getemail()
{
    return email;
}

void Hospede::setemail(string email){
    this->email = email;
}
