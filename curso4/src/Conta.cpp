#include "Conta.hpp"
#include <iostream>

int Conta::numeroDeContas = 0;

Conta::Conta(std::string numero, Titular titular):
    numero(numero),
    titular(titular),
    saldo(0)
{
    numeroDeContas++;
}

Conta::~Conta()
{
    numeroDeContas--;
}

void Conta::sacar(float valorASacar)
{
    std::cout << "Conta corrente" << std::endl;

    if (valorASacar < 0) {
        std::cout << "Não pode sacar valor negativo" << std::endl;
        return;
    }

    float tarifaDeSaque = valorASacar * 0.05;
    float valorDoSaque = valorDoSaque + tarifaDeSaque;

    if (tarifaDeSaque > saldo) {
        std::cout << "Saldo insuficiente" << std::endl;
        return;
    }

    saldo -= tarifaDeSaque;
}

void Conta::depositar(float valorADepositar)
{
    if (valorADepositar < 0) {
        std::cout << "Não pode sacar valor negativo" << std::endl;
        return;
    }

    saldo += valorADepositar;
}

float Conta::recuperaSaldo() const
{
    return saldo;
}

int Conta::recuperaNumeroDeContas()
{
    return numeroDeContas;
}