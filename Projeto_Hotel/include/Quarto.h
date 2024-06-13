#ifndef QUARTO_H
#define QUARTO_H

#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::cout;
using std::endl;
using std::vector;

    class Quarto
    {
    protected:
        int numero;
        string tipo;
        double preco;

    public:
        Quarto(int numero, string tipo, double preco);
        virtual ~Quarto();

        int getNumero();
        string getTipo();
        double getPreco();

        void setNumero(int numero);
        void setTipo(string tipo);
        void setPreco(double preco);

};

#endif // QUARTO_H
