#include "../include/Reserva.h"

#include <iostream>
#include <string>
#include <string>
#include <vector>

using std::string;
using std::cout;
using std::endl;
using std::vector;


    Reserva::Reserva(string dtCheckIN, string dtCheckOUT, Hospede* hospede, Quarto* quarto, double valor)
    : dtCheckIN(dtCheckIN), dtCheckOUT(dtCheckOUT), hospede(hospede), quarto(quarto), valor(valor)
    {

    }

    Reserva::~Reserva()
    {

    }

    string Reserva::getdtCheckIN(){
        return dtCheckIN;
    }

    string Reserva::getdtCheckOUT(){
        return dtCheckOUT;
    }

    Hospede* Reserva::getHospede(){
        return hospede;
    }

    Quarto* Reserva::getQuarto(){
        return quarto;
    }

    double Reserva::getValor(){
        return valor;
    }
