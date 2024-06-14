#ifndef HOSPEDE_H
#define HOSPEDE_H

#include "Pessoa.h"
#include "Cliente.h"
#include <string>
#include <vector>

using std::string;

class Hospede : public Cliente{
    private:
        string email;
        std::vector<string> historicoReserva;

    public:
        Hospede(const string nome, const string cpf, const string telefone, const string email);
        ~Hospede();

        string getemail();
        void setemail(string email);

        void addReserva(string reserva);
        std::vector<string> gethistoricoReserva();
};

#endif // HOSPEDE_H
