#include <iostream>
#include <string>

#include "../include/Avaliacoes.h"
#include "../include/Cliente.h"
#include "../include/Hospede.h"
#include "../include/Hotel.h"
#include "../include/Pagamentos.h"
#include "../include/Pessoa.h"
#include "../include/Quarto.h"
#include "../include/Quarto_Luxo.h"
#include "../include/Quarto_Simples.h"
#include "../include/Quarto_Suite.h"
#include "../include/Reserva.h"


mensagem_inicial() {
    std::cout << "==========================================" << std::endl;
    std::cout << "Seja bem-vindo ao sistema de hotelaria!" << std::endl;
    std::cout << "==========================================" << std::endl << std::endl;
}

mensagem_menu() {
    std::cout << "1 -> Opcao 1" << std::endl;
    std::cout << "2 -> Opcao 2" << std::endl;
    std::cout << "3 -> Opcao 3" << std::endl;
    std::cout << "4 -> Sair" << std::endl;
    std::cout << std::endl;
}

mensagem_teste() {
    std::cout << "TESTE TESTE TESTE" << std::endl;
}

converte_comando() {
    std::cout << "CONVERTE";
}

using namespace std;


int main() {

    mensagem_inicial();

    bool i = true;
    string escolha;


    while(i==true) {

        mensagem_menu();
        std::cin >> escolha;

        switch (escolha)
        {
            case '1':
                std::cout << "Escolheu 1" << endl << endl;
                break;
            case '2':
                std::cout << "Escolheu 2" << endl << endl;
                break;
            case '3':
                std::cout << "Escolheu 3" << endl << endl;
                break;
            case '4':
                std::cout << "Escolheu Sair" << endl << endl;
                i = false;
                break;
            default:
                std::cout << "Escolha invalida" << endl << endl;
                break;
        }
    }
    mensagem_teste();
}
