#include "Conta.hpp"
#include <iostream>

int Conta::numeroDeContas = 0;

Conta::Conta(std::string numero, std::string nomeTitular, std::string cpfTitular):
    numero(numero),
    nomeTitular(nomeTitular),
    cpfTitular(cpfTitular),
    saldo(0)
{

    numeroDeContas++;
}

Conta::~Conta() {
    numeroDeContas--;
}

void Conta::sacar(float valorASacar)
{
    if(valorASacar < 0) {
        std::cout << "Não pode sacar valor negativo" << std::endl;
        return;
    }

    if(valorASacar > saldo) {
        std::cout << "Saldo insuficiente" << std::endl;
        return;
    }
    saldo -= valorASacar;
}

void Conta::depositar(float valorADepositar)
{
    saldo += valorADepositar;
}

float Conta::recuperaSaldo() const
{
    return saldo;
}


std::string Conta::recuperaNumero() const
{
    return numero;
}

std::string Conta::recuperaNomeTitular() const
{
    return nomeTitular;
}


std::string Conta::recuperaCpfTitular() const
{
    return cpfTitular;
}

int Conta::recuperaNumeroDeContas()
{
    return numeroDeContas;
}

void Conta::verificaTamanhoDoNone()
{
    if(nomeTitular.size() < 5) {
        std::cout << "Nome muito curto" << std::endl;
        exit(1);
    }
}
