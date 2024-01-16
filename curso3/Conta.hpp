#pragma once
#include <string>

class Conta
{
private:
    static int numeroDeContas;

public:
    static int recuperaNumeroDeContas();

private:
    std::string numero;
    std::string nomeTitular;
    std::string cpfTitular;
    float saldo;

public:
    Conta(std::string numero, std::string nomeTitular, std::string cpfTitular);
    ~Conta();
    void sacar(float valorASacar);
    void depositar(float valorADepositar);
    float recuperaSaldo() const;
    std::string recuperaNumero() const;
    std::string recuperaNomeTitular() const;
    std::string recuperaCpfTitular() const;

private:
    void verificaTamanhoDoNone();
};
