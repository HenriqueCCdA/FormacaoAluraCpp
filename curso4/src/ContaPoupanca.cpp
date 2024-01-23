#include "ContaPoupanca.hpp"
#include <iostream>

ContaPoupanca::ContaPoupanca(std::string numero, Titular titular): Conta(numero, titular)
{

}

float ContaPoupanca::taxaDeSaque() const
{
    std::cout << "Chamando o método sacar de conta poupança" << std::endl;
    return 0.03;
}
