#include "catch.hpp"
#include "Leilao.hpp"
#include "Usuario.hpp"
#include "Lance.hpp"

TEST_CASE("Leilão não deve receber lances consecutivos do mesmo usuário") {

    // Arange
    Leilao leilao("Fiat 147 0km");
    Usuario vinicius("Vinicius Dias");

    Lance primeiroLance(vinicius, 1000);
    Lance segundoLance(vinicius, 1500);

    // Act
    leilao.recebeLance(primeiroLance);
    leilao.recebeLance(segundoLance);

    // Assert
    REQUIRE(1 == leilao.recuperaLances().size());
    REQUIRE(1000 == leilao.recuperaLances()[0].recuperaValor());

}
