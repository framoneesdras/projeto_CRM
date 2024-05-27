#ifndef CLIENTE__H
#define CLIENTE__H
#include "Cliente.h"
#include <string>

using std::string;

    // Classe Cliente_ derivada de Cliente

    class Cliente_ :  public Cliente
    {

    private:
        int ID_Cliente_;


    public:

        Cliente_(const string nm, const string gn, const string endr, const int cpf);

        ~Cliente_();


    void alugarEspaco();



};

#endif // CLIENTE__H
