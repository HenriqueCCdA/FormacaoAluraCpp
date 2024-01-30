#include "Avaliador.hpp"
#include <iostream>

int main() {
    Lance primeiroLance(Usuario("Vinicius Dias"), 1000);
    Lance segundoLance(Usuario("Ana Maria"), 2000);
    Leilao leilao("Fia 147 0km");
    leilao.recebeLance(primeiroLance);
    leilao.recebeLance(segundoLance);

    Avaliador leiloeiro;
    leiloeiro.avalia(leilao);

    std::cout << leiloeiro.recuperaMaiorValor() << std::endl;

    return 0;
}
