#include "Quarto.h"

#include <iostream>
#include <string>
#include <string>
#include <vector>

using std::string;
using std::cout;
using std::endl;
using std::vector;

    Quarto::Quarto(int numero, string tipo, double preco)
    : numero(numero), tipo(tipo), preco(preco)
    {

    }

    Quarto::~Quarto()
    {

    }

    int Quarto::getNumero(){
        return numero;
    }

    string Quarto::getTipo(){
        return tipo;
    }

    double Quarto::getPreco(){
        return preco;
    }

    void Quarto::setNumero(int numero){
        this->numero = numero;
    }

    void Quarto::setTipo(string tipo){
        this->tipo = tipo;
    }

    void Quarto::setPreco(double preco){
        this->preco = preco;
    }
