#include <iostream>
#include <string>
#include <vector>

#include "../include/Pessoa.h"
#include "../include/Avaliacoes.h"
#include "../include/Cliente.h"
#include "../include/Hospede.h" 
#include "../include/Hotel.h"
#include "../include/Pagamentos.h"
#include "../include/Quarto.h"
#include "../include/Quarto_Luxo.h"
#include "../include/Quarto_Simples.h"
#include "../include/Quarto_Suite.h"
#include "../include/Reserva.h"
#include "../include/Dados.h"
using namespace std;

void mensagem_inicial() {
    std::cout << "==========================================" << std::endl;
    std::cout << "Seja bem-vindo ao sistema de hotelaria!" << std::endl;
    std::cout << "==========================================" << std::endl << std::endl;
}

void mensagem_menu() {
    cout << "1 -> Cadastrar Quarto Simples" << std::endl;
    cout << "2 -> Cadastrar Quarto Suite" << std::endl;
    cout << "3 -> Cadastrar Quarto Luxo" << std::endl;
    cout << "4 -> Cadastrar Hospede" << std::endl;
    cout << "5 -> Cadastrar Reserva" << std::endl;
    cout << "6 -> Cadastrar Pagamento" << std::endl;
    cout << "7 -> Cadastrar Avaliacao" << std::endl;
    cout << "8 -> Sair" << std::endl;
    cout << std::endl;
}

void mensagem_teste() {
    std::cout << "TESTE TESTE TESTE" << std::endl;
}

void converte_comando() {
    std::cout << "CONVERTE";
}

void cadastrarQuartoSimples(Dados& dados) {
    int numero;
    double preco;

    cout << "Digite o número do quarto: ";
    cin >> numero;
    cout << "Digite o preço do quarto: ";
    cin >> preco;

    Quarto_Simples quarto(numero, preco);
    dados.salvar(to_string(quarto.getNumero()) + "," + to_string(quarto.getPreco()));
}

void cadastrarQuartoSuite(Dados& dados) {
    int numero;
    double preco;

    cout << "Digite o número do quarto: ";
    cin >> numero;
    cout << "Digite o preço do quarto: ";
    cin >> preco;

    Quarto_Suite quarto(numero, preco);
    dados.salvar(to_string(quarto.getNumero()) + "," + to_string(quarto.getPreco()));
}

void cadastrarQuartoLuxo(Dados& dados) {
    int numero;
    double preco;

    cout << "Digite o número do quarto: ";
    cin >> numero;
    cout << "Digite o preço do quarto: ";
    cin >> preco;

    Quarto_Luxo quarto(numero, preco);
    dados.salvar(to_string(quarto.getNumero()) + "," + to_string(quarto.getPreco()));
}

void cadastrarHospede(Dados& dados) {
    string nome, cpf, telefone, email;

    cout << "Digite o nome do hospede: ";
    cin >> nome;
    cout << "Digite o CPF do hospede: ";
    cin >> cpf;
    cout << "Digite o telefone do hospede: ";
    cin >> telefone;
    cout << "Digite o email do hospede: ";
    cin >> email;

    Hospede hospede(nome, cpf, telefone, email);
    dados.salvar(hospede.getnome() + "," + hospede.getcpf() + "," + hospede.gettelefone() + "," + hospede.getemail());
}

void cadastrarReserva(Dados& dados) {
    string dtCheckIN, dtCheckOUT;
    Hospede* hospede;
    Quarto* quarto;
    double valor;

    // Aqui você deve inicializar hospede e quarto com os valores apropriados

    cout << "Digite a data de check-in: ";
    cin >> dtCheckIN;
    cout << "Digite a data de check-out: ";
    cin >> dtCheckOUT;
    cout << "Digite o valor: ";
    cin >> valor;

    Reserva reserva(dtCheckIN, dtCheckOUT, hospede, quarto, valor);
    dados.salvar(reserva.getdtCheckIN() + "," + reserva.getdtCheckOUT() + "," + to_string(reserva.getValor()));
}

void cadastrarPagamento(Dados& dados) {
    string metodo;
    double valor;

    cout << "Digite o método de pagamento: ";
    cin >> metodo;
    cout << "Digite o valor do pagamento: ";
    cin >> valor;

    Pagamentos pagamento(metodo, valor);
    dados.salvar(pagamento.getMetodo() + "," + to_string(pagamento.getValor()));
}

void cadastrarAvaliacao(Dados& dados) {
    string comentario;
    int nota;

    cout << "Digite o comentário da avaliação: ";
    cin >> comentario;
    cout << "Digite a nota da avaliação: ";
    cin >> nota;

    Avaliacoes avaliacao(comentario, nota);
    dados.salvar(avaliacao.getComentario() + "," + to_string(avaliacao.getNota()));
}





int main() {
    
    mensagem_inicial();

    // Criar um objeto Dados para o arquivo Dados.csv
    Dados dados("Dados.csv");

    // Carregar os dados do arquivo CSV
    std::vector<std::string> linhas = dados.carregar();

    // Imprimir os dados carregados
    for (const std::string& linha : linhas) {
        std::cout << linha << std::endl;
    }

    bool i = true;
    int escolha;
    int numero;
    double preco;
    string nome, cpf, telefone, email;

    while(i==true) {

        mensagem_menu();
        std::cin >> escolha;

        switch (escolha)
        {
            case 1:
                cadastrarQuartoSimples(dados);
                break;
            case 2:
                cadastrarQuartoSuite(dados);
                break;
            case 3:
                cadastrarQuartoLuxo(dados);
                break;
            case 4:
                cadastrarHospede(dados);
                break;
            case 5:
                cadastrarReserva(dados);
                break;
            case 6:
                cadastrarPagamento(dados);
                break;
            case 7:
                cadastrarAvaliacao(dados);
                break;
            case 8:
                std::cout << "Escolheu Sair" << std::endl << std::endl;
                i = false;
                break;
            default:
                std::cout << "Escolha invalida" << std::endl << std::endl;
                break;
        }
    }

    mensagem_teste();
}
