#include "Cpf.hpp"
#include <iostream>

Cpf::Cpf(std::string numero): numero(numero)
{
}

Cpf::Cpf(const Cpf& cpf)
{
    numero = cpf.recuperaNumero();
}

std::string Cpf::recuperaNumero() const
{
    return numero;
}
