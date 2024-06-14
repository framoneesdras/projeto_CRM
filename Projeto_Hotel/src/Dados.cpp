#include "Dados.h"
#include <fstream>
#include <sstream>

Dados::Dados(const std::string& arquivo) : arquivo(arquivo) {}

void Dados::salvar(const std::string& linha) {
    std::ofstream ofs(arquivo, std::ios::app);
    if (ofs.is_open()) {
        ofs << linha << std::endl;
        ofs.close();
    }
}

std::vector<std::string> Dados::carregar() {
    std::vector<std::string> linhas;
    std::ifstream ifs(arquivo);
    std::string linha;
    while (ifs.is_open() && std::getline(ifs, linha)) {
        linhas.push_back(linha);
    }
    return linhas;
}

