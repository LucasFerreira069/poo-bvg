#pragma once

#include <string>

class Contato {
private:
    std::string nome;
    std::string telefone;

public:
    Contato(std::string nome, std::string telefone);

    ~Contato();

    void imprimirNome() const;
    void imprimirTelefone() const;
};