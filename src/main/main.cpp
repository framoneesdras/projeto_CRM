#include <iostream> //Inclusao bibliotecas padrão.
#include <string>
#include <vector>

#include "Pessoa.h" //Inclusao classes criadas.
#include "Avaliacao.h"
#include "Cliente.h"
#include "Hospede.h"
#include "Hotel.h"
#include "Pagamento.h"
#include "Quarto.h"
#include "Quarto_Luxo.h"
#include "Quarto_Simples.h"
#include "Quarto_Suite.h"
#include "Reserva.h"
#include "Dados.h"

using namespace std; //Otimizacao uso biblioteca iostream.

Dados dados("Dados.csv");

void mensagem_inicial() { //Mensagem padrao inicializacao sistema
    cout << "==========================================" << endl;
    cout << "Seja bem-vindo ao sistema de hotelaria!" << endl;
    cout << "==========================================" << endl << endl;
}

void mensagem_menu() { //Mensagem padrao exibir menu (usada diversas vezes)
    cout << "1 -> Cadastrar Quarto Simples" << endl;
    cout << "2 -> Cadastrar Quarto Suite" << endl;
    cout << "3 -> Cadastrar Quarto Luxo" << endl;
    cout << "4 -> Cadastrar Hospede" << endl;
    cout << "5 -> Cadastrar Reserva" << endl;
    cout << "6 -> Cadastrar Pagamento" << endl;
    cout << "7 -> Cadastrar Avaliacao" << endl;
    cout << "8 -> Listar Quartos" << endl;
    cout << "9 -> Listar Hospedes" << endl;
    cout << "10 -> Listar Reservas" << endl;
    cout << "11 -> Listar Pagamentos" << endl;
    cout << "12 -> Listar Avaliacoes" << endl;
    cout << "13 -> Sair" << endl;
    cout << endl;
}

void cadastrarQuartoSimples(Dados& dados) { //Funcao void 1, cadastra quartos simples (heranca de quarto)
    int idQuarto, idHotel;
    double preco;
    bool disponivel;

    std::cout << "Digite o ID do quarto: ";
    std::cin >> idQuarto;

    std::cout << "Digite o ID do hotel: ";
    std::cin >> idHotel;

    std::cout << "Digite o preco: ";
    std::cin >> preco;

    std::cout << "O quarto esta diponivel? (1 para sim, 0 para nao): ";
    std::cin >> disponivel;

    Quarto_Simples newRoom(idQuarto, idHotel, preco, disponivel);
    std::vector<Quarto> rooms;
    rooms.push_back(newRoom);
    dados.salvarQuartos(rooms);
}

void cadastrarQuartoSuite(Dados& dados) { //Funcao void 2, cadastra quartos suites (heranca de quarto)
    int idQuarto, idHotel;
    double preco;
    bool disponivel;

    std::cout << "Digite o ID do quarto: ";
    std::cin >> idQuarto;

    std::cout << "Digite o ID do hotel: ";
    std::cin >> idHotel;

    std::cout << "Digite o preco: ";
    std::cin >> preco;

    std::cout << "O quarto esta diponivel? (1 para sim, 0 para nao): ";
    std::cin >> disponivel;

    Quarto_Suite newRoom(idQuarto, idHotel, preco, disponivel);
    std::vector<Quarto> rooms;
    rooms.push_back(newRoom);
    dados.salvarQuartos(rooms);
}

void cadastrarQuartoLuxo(Dados& dados) { //Funcao void 3, cadastra quartos luxo (heranca de quarto)
    int idQuarto, idHotel;
    double preco;
    bool disponivel;

    std::cout << "Digite o ID do quarto: ";
    std::cin >> idQuarto;

    std::cout << "Digite o ID do hotel: ";
    std::cin >> idHotel;

    std::cout << "Digite o preco: ";
    std::cin >> preco;

    std::cout << "O quarto esta diponivel? (1 para sim, 0 para nao): ";
    std::cin >> disponivel;

    Quarto_Luxo newRoom(idQuarto, idHotel, preco, disponivel);
    std::vector<Quarto> rooms;
    rooms.push_back(newRoom);
    dados.salvarQuartos(rooms);
}

void cadastrarHospede(Dados& dados) { //Funcao void 4, cadastra hospedes (heranca de cliente -> pessoa)
    std::string nome, telefone, email;

    std::cout << "Digite o nome do usuario: ";
    std::cin.ignore();
    std::getline(std::cin, nome);

    std::cout << "Digite o telefone do usuario: ";
    std::getline(std::cin, telefone);

    std::cout << "Digite o email do usuario: ";
    std::getline(std::cin, email);

    Hospede newGuest(nome, telefone, email);
    std::vector<Hospede> guests;
    guests.push_back(newGuest);
    dados.salvarHospedes(guests);
}

void cadastrarReserva(Dados& dados) { //Funcao void 5, cadastra reservas (heranca de cliente -> pessoa)
    int idHospede, idQuarto;
    std::string dataInicio, dataFim;

    std::cout << "Digite o codigo do usuario: ";
    std::cin >> idHospede;

    std::cout << "Digite o codigo do quarto: ";
    std::cin >> idQuarto;

    std::cout << "Digite a data de entrada (AAAA-MM-DD): ";
    std::cin >> dataInicio;

    std::cout << "Digite a data de saida (AAAA-MM-DD): ";
    std::cin >> dataFim;

    Reserva newReservation(idHospede, idQuarto, dataInicio, dataFim, 0);
    std::vector<Reserva> reservations;
    reservations.push_back(newReservation);
    dados.salvarReservas(reservations);
}

void cadastrarPagamento(Dados& dados) { //Funcao void 6, cadastra pagamentos (classe Pagamento)
    int idPagamento, idReserva;
    double valor;
    std::string data;

    std::cout << "Digite o codigo do pagamento: ";
    std::cin >> idPagamento;

    std::cout << "Digite o codigo da reserva: ";
    std::cin >> idReserva;

    std::cout << "Digite o valor do pagamento: ";
    std::cin >> valor;

    std::cout << "Digite a data de pagamento (AAAA-MM-DD): ";
    std::cin >> data;

    Pagamento newPayment(idPagamento, idReserva, valor, data);
    std::vector<Pagamento> payments;
    payments.push_back(newPayment);
    dados.salvarPagamentos(payments);
}

void cadastrarAvaliacao(Dados& dados) { //Funcao void 7, cadastro de avalicaos (classe avaliacoes)
    int idAvaliacao, idHospede, nota;
    std::string comentario;

    std::cout << "Digite o codigo da avaliacao: ";
    std::cin >> idAvaliacao;

    std::cout << "Digite o codigo do usuario: ";
    std::cin >> idHospede;

    std::cout << "Digite a nota (1-5): ";
    std::cin >> nota;

    std::cout << "Digite o comentario: ";
    std::cin.ignore();
    std::getline(std::cin, comentario);

    Avaliacao newEvaluation(idAvaliacao, idHospede, nota, comentario);
    std::vector<Avaliacao> evaluations;
    evaluations.push_back(newEvaluation);
    dados.salvarAvaliacoes(evaluations);
}

void listarQuartos(Dados& dados) { //Funcao void 8, lista quartos registrados.
    std::vector<Quarto> quartos = dados.getQuartos();
    for (const auto& quarto : quartos) {
        std::cout << "Quarto ID: " << quarto.getIdQuarto() << std::endl;
        std::cout << "Hotel ID: " << quarto.getIdHotel() << std::endl;
        std::cout << "Preco: " << quarto.getPreco() << std::endl;
        std::cout << "Disponibilidade: " << (quarto.isDisponivel() ? "Yes" : "No") << std::endl;
        std::cout << std::endl;
    }
}

void listarHospedes(Dados& dados) { //Funcao void 9, lista hospedes registrados.
    std::vector<Hospede> hospedes = dados.getHospedes();
    for (const auto& hospede : hospedes) {
        std::cout << "Nome usuario: " << hospede.getNome() << std::endl;
        std::cout << "Numero telefone: " << hospede.getTelefone() << std::endl;
        std::cout << "Email: " << hospede.getEmail() << std::endl;
        std::cout << std::endl;
    }
}

void listarReservas(Dados& dados) { //Funcao void 10, lista reservas registradas.
    std::vector<Reserva> reservas = dados.getReservas();
    for (const auto& reserva : reservas) {
        std::cout << "Codigo de reserva: " << reserva.getIdReserva() << std::endl;
        std::cout << "Codigo de usuario: " << reserva.getIdHospede() << std::endl;
        std::cout << "Codigo do quarto: " << reserva.getIdQuarto() << std::endl;
        std::cout << "Data de entrada: " << reserva.getDataInicio() << std::endl;
        std::cout << "Data de saida: " << reserva.getDataFim() << std::endl;
        std::cout << std::endl;
    }
}

void listarPagamentos(Dados& dados) { //Funcao void 11, lista pagamentos registrados.
    std::vector<Pagamento> pagamentos = dados.getPagamentos();
    for (const auto& pagamento : pagamentos) {
        std::cout << "Codigo do pagamento: " << pagamento.getIdPagamento() << std::endl;
        std::cout << "Codigo da reserva: " << pagamento.getIdReserva() << std::endl;
        std::cout << "Valor: " << pagamento.getValor() << std::endl;
        std::cout << "Data: " << pagamento.getData() << std::endl;
        std::cout << std::endl;
    }
}

void listarAvaliacoes(Dados& dados) { //Funcao void 12, lista avalicacoes registradas.
    std::vector<Avaliacao> avaliacoes = dados.getAvaliacoes();
    for (const auto& avaliacao : avaliacoes) {
        std::cout << "Codigo da avaliacao: " << avaliacao.getIdAvaliacao() << std::endl;
        std::cout << "Codigo do usuario: " << avaliacao.getIdHospede() << std::endl;
        std::cout << "Avalicao: " << avaliacao.getNota() << std::endl;
        std::cout << "Comentario: " << avaliacao.getComentario() << std::endl;
        std::cout << std::endl;
    }
}

int main() { //principal
    
    mensagem_inicial();

    bool continuar = true; //variavel tipo bool para controlar continuidade do while.
    int escolha; //variavel tipo int para receber entrada de interacao usuario e interface.

    while (continuar) {
        mensagem_menu();
        cin >> escolha;

        switch (escolha) {
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
                listarQuartos(dados);
                break;
            case 9:
                listarHospedes(dados);
                break;
            case 10:
                listarReservas(dados);
                break;
            case 11:
                listarPagamentos(dados);
                break;
            case 12:
                listarAvaliacoes(dados);
                break;
            case 13:
                cout << "Escolheu Sair" << endl << endl;
                continuar = false;
                break;
            default:
                cout << "Escolha invalida" << endl << endl;
                break;
        }
        
    }

    return 0;
}
