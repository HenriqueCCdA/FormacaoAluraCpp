#include<iostream>
#include<string>
#include "Conta.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"


using namespace std;

void ExibeSaldo(const Conta& conta)
{
    cout << "O saldo da conta é: " << conta.recuperaSaldo() << endl;
}


int main()
{
    Cpf* meuPonteiro = new Cpf("123.456.789-10");
    cout << meuPonteiro->recuperaNumero() << endl;

    Conta umaConta("123456", Titular(Cpf("123.456.789-10"), "Vinicius"));

    umaConta.depositar(500);
    umaConta.sacar(200);

    ExibeSaldo(umaConta);

    Conta umaOutraConta("654321", Titular(Cpf("987.654.321-10"), "Dias asda"));

    umaOutraConta.depositar(500);
    umaOutraConta.sacar(200);

    ExibeSaldo(umaConta);

    cout << "Numero de contas: " << Conta::recuperaNumeroDeContas() << endl;
    return 0;
}
