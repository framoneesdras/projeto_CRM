#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED
#include <string>

using std::string;

    // Classe Generica

    class Pessoa
    {

    private:

            string nome;
            string genero;
            string endereco;
            int cpf;
            int tipo; // 1 = Cliente ,

    public:

            Pessoa(const string nm, const string gn, const string endr, const int cpf);

            ~Pessoa();

            string getnome();
            string getgenero();
            string getendereco();
            int getcpf();
            int gettipo();

    };


#endif // PESSOA_H_INCLUDED
