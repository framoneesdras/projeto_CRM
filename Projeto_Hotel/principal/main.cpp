/* 
Estudantes: Esdras Framone - 2022060827
            Raul Vitor - 
            Victor - 
Turma: PDS II - TF
Semestre 01/24
-------------------/
Projeto PDS II - Sistema Gerenciamento Hotel
*/

#include <iostream>
#include <string>

#include "../src/Cliente_.h"
#include "../src/Cliente.h"
#include "../src/hospede.h"
#include "../src/Pessoa.h"

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
}

mensagem_teste() {
    std::cout << "TESTE TESTE TESTE" << std::endl;
}


int main() {

    mensagem_inicial();

    bool i = true;
    int escolha;


    while(i==true) {

        mensagem_menu();
        std::cin >> escolha;

        switch (escolha) {
            case 1:
                std::cout << "Escolheu 1";
                break;
            case 2:
                std::cout << "Escolheu 2";
                break;
            case 3:
                std::cout << "Escolheu 3";
                break;
            case 4:
                std::cout << "Escolheu Sair";
                return 0;
                break;
            default:
                std::cout << "Escolha invalida";
                break;
        }
    }
    mensagem_teste();

    return 0;
}