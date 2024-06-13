#ifndef QUARTO_LUXO_H
#define QUARTO_LUXO_H

#include <iostream>
#include <string>
#include <vector>
#include "Quarto.h"

using std::string;
using std::cout;
using std::endl;
using std::vector;

    class Quarto_Luxo : public Quarto
    {
    private:

    public:
        Quarto_Luxo(int numero, double preco);
        ~Quarto_Luxo();
};

#endif // QUARTO_LUXO_H
