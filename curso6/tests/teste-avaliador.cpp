#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Avaliador.hpp"


TEST_CASE("Deve recuperar maior lance de leilão e ordem crescente"){
    // Arrenge - Given
    Lance primeiroLance(Usuario("Vinicius Dias"), 1000);
    Lance segundoLance(Usuario("Ana Maria"), 2000);
    Leilao leilao("Fia 147 0km");
    leilao.recebeLance(primeiroLance);
    leilao.recebeLance(segundoLance);

    Avaliador leiloeiro;

    // Act - When
    leiloeiro.avalia(leilao);

    // Assert - Then
    REQUIRE(2000 == leiloeiro.recuperaMaiorValor());
}

TEST_CASE("Deve recuperar maior lance de leilão e ordem decrescente"){
    // Arrenge - Given
    Lance primeiroLance(Usuario("Vinicius Dias"), 2000);
    Lance segundoLance(Usuario("Ana Maria"), 1000);
    Leilao leilao("Fia 147 0km");
    leilao.recebeLance(primeiroLance);
    leilao.recebeLance(segundoLance);

    Avaliador leiloeiro;

    // Act - When
    leiloeiro.avalia(leilao);

    // Assert - Then
    REQUIRE(2000 == leiloeiro.recuperaMaiorValor());
}


TEST_CASE("Deve recuperar menor lance de leilão e ordem decrescente"){
    // Arrenge - Given
    Lance primeiroLance(Usuario("Vinicius Dias"), 2000);
    Lance segundoLance(Usuario("Ana Maria"), 1000);
    Leilao leilao("Fia 147 0km");
    leilao.recebeLance(primeiroLance);
    leilao.recebeLance(segundoLance);

    Avaliador leiloeiro;

    // Act - When
    leiloeiro.avalia(leilao);

    // Assert - Then
    REQUIRE(1000 == leiloeiro.recuperaMenorValor());
}


TEST_CASE("Deve recuperar menor lance de leilão e ordem crescente"){
    // Arrenge - Given
    Lance primeiroLance(Usuario("Vinicius Dias"), 1000);
    Lance segundoLance(Usuario("Ana Maria"), 2000);
    Leilao leilao("Fia 147 0km");
    leilao.recebeLance(primeiroLance);
    leilao.recebeLance(segundoLance);

    Avaliador leiloeiro;

    // Act - When
    leiloeiro.avalia(leilao);

    // Assert - Then
    REQUIRE(1000 == leiloeiro.recuperaMenorValor());
}
