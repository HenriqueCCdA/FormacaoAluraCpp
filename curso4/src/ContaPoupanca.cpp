#include "ContaPoupanca.hpp"
#include <iostream>

ContaPoupanca::ContaPoupanca(std::string numero, Titular titular): Conta(numero, titular)
{

}


void ContaPoupanca::sacar(float valorASacar)
{
    std::cout << "Conta poupança" << std::endl;

    if (valorASacar < 0) {
        std::cout << "Não pode sacar valor negativo" << std::endl;
        return;
    }

    float tarifaDeSaque = valorASacar * 0.03;
    float valorDoSaque = valorDoSaque + tarifaDeSaque;

    if (tarifaDeSaque > saldo) {
        std::cout << "Saldo insuficiente" << std::endl;
        return;
    }

    saldo -= tarifaDeSaque;
}
