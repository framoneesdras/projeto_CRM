#ifndef QUARTO_SIMPLES_H
#define QUARTO_SIMPLES_H

#include <iostream>
#include <string>
#include <vector>
#include "Quarto.h"

using std::string;
using std::cout;
using std::endl;
using std::vector;

    class Quarto_Simples : public Quarto
    {
    private:


    public:
        Quarto_Simples(int numero, double preco);
        ~Quarto_Simples();

};

#endif // QUARTO_SIMPLES_H
