#pragma once
#include "Cpf.hpp"
#include <string>

class Pessoa
{
protected:
    Cpf cpf;
    std::string nome;

private:
    void verificaTamanhoDoNome();

public:
    Pessoa(Cpf cpf, std::string nome);
};
