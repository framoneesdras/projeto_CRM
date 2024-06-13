#ifndef HOTEL_H
#define HOTEL_H

#include <iostream>
#include "Quarto.h"
#include "Reserva.h"
#include <string>
#include <vector>

using std::string;
using std::cout;
using std::endl;
using std::vector;

    class Hotel
    {
    private:
        string nome;
        string endereco;
        vector<Quarto*> quartos;
        vector<Reserva*> reservas;



    public:
        Hotel(string nome, string endereco);
        ~Hotel();

        void addQuarto(Quarto* quarto);
        void addReserva(Reserva* reserva);
        vector<Quarto*>getQuartos();
        vector<Reserva*> getReservas();

        string getNome();
        string getEndereco();
        void setNome(string nome);
        void setEndereco(string endereco);


};

#endif // HOTEL_H
