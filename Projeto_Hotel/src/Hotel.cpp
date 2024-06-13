#include "Hotel.h"
#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::cout;
using std::endl;
using std::vector;


    Hotel::Hotel(string nome, string endereco)
    : nome(nome), endereco(endereco)
    {

    }

    Hotel::~Hotel(){
        for (auto quarto : quartos){
            delete quarto;
        }

        for (auto it = reservas.begin(); it != reservas.end(); ++it) {
            delete *it;
       // for (auto reserva : reservas){  >> dar uma olhada
           // delete reserva;
        }

    }

    void Hotel::addQuarto(Quarto* quarto){
        quartos.push_back(quarto);
    }

    void Hotel::addReserva(Reserva* reserva){
        reservas.push_back(reserva);
    }

    vector<Quarto*> Hotel::getQuartos(){
        return quartos;
    }

    vector<Reserva*> Hotel::getReservas(){
        return reservas;
    }

    string Hotel::getNome(){
        return nome;
    }

    string Hotel::getEndereco(){
        return endereco;
    }

    void Hotel::setNome(string nome){
        this->nome = nome;
    }

    void Hotel::setEndereco(string endereco){
        this->endereco = endereco;
    }
