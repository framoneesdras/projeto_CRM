#ifndef PESSOA_H
#define PESSOA_H
#include <string>

using std::string;

    // Classe Generica

    class Pessoa
    {

    protected:

            string nome;
            string cpf;
            string telefone;
           // int tipo; // 1 = Cliente ,

    public:

            Pessoa(const string nome, const string cpf, const string telefone);

            virtual ~Pessoa();

            string getnome();
            string getcpf();
            string gettelefone();
            string settelefone();
            string setnome();
            string setcpf();
            // int gettipo();
};

#endif // PESSOA_H
