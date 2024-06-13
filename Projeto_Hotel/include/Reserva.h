#ifndef RESERVA_H
#define RESERVA_H

#include <iostream>
#include <string>
#include <vector>
#include "Hospede.h"
#include "Quarto.h"

using std::string;
using std::cout;
using std::endl;
using std::vector;


    class Reserva
    {
    private:
        string dtCheckIN;
        string dtCheckOUT;
        Hospede* hospede;
        Quarto* quarto;
        double valor;


    public:
        Reserva(string dtCheckIN, string dtCheckOUT, Hospede* hospede, Quarto* quarto, double valor);
        ~Reserva();

        string getdtCheckIN();
        string getdtCheckOUT();
        Hospede* getHospede();
        Quarto* getQuarto();
        double getValor();

};

#endif // RESERVA_H
