#ifndef QUARTO_SUITE_H
#define QUARTO_SUITE_H

#include <iostream>
#include <string>
#include <vector>
#include "Quarto.h"

using std::string;
using std::cout;
using std::endl;
using std::vector;

    class Quarto_Suite : public Quarto
    {
    private:


    public:
        Quarto_Suite(int numero, double preco);
        ~Quarto_Suite();
};

#endif // QUARTO_SUITE_H
