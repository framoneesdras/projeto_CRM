#ifndef DADOS_H
#define DADOS_H

#include <string>
#include <vector>

class Dados {
public:
    Dados(const std::string& arquivo);
    void salvar(const std::string& linha);
    std::vector<std::string> carregar();

private:
    std::string arquivo;
};

#endif // DADOS_H

