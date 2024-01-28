#include <iostream>
#include <string>
#include "Conta.hpp"
#include "ContaCorrente.hpp"
#include "ContaPoupanca.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"
#include "Funcionario.hpp"
#include "Gerente.hpp"
#include "DiaDaSemana.hpp"

using namespace std;

void ExibeSaldo(const Conta& conta)
{
    cout << "O saldo da conta é: " << conta.recuperaSaldo() << endl;
}

void RealizaSaque(Conta& conta)
{
    auto resultado = conta.sacar(200);
    if (auto saldo = std::get_if<float>(&resultado)){
        cout << "Novo saldo da conta" << *saldo << endl;
    }
}

void FazLogin(Autenticavel& alguem, string senha)
{
    if (alguem.autentica(senha)) {
        cout << "Login realizado com sucesso" << endl;
    } else {
        cout << "Senha inválida" << endl;
    }
}

ostream& operator<<(ostream& cout, const Conta& conta)
{
    Pessoa titular = conta.titular;
    cout << "O saldo da conta é (operador): " << conta.recuperaSaldo() << endl;
    cout << "O titular da conta é " << titular.recuperaNome() << endl;
    return cout;
}

template<typename MeuTipo>
MeuTipo& Menor(MeuTipo& a, MeuTipo& b)
{
    return a < b ? a: b;
}

int main()
{
    Titular titular(Cpf("123.456.789-10"), "Vinicius", "umasenha");

    ContaPoupanca umaConta("123456", titular);
    umaConta.depositar(500);

    Titular outro(Cpf("098.765.432-10"), "Vinicius Dias", "outrasenha");
    ContaCorrente umaOutraConta("654321", titular);
    (Conta&)umaOutraConta += 300;

    ContaCorrente outraContaCorrente("546312", titular);

    outraContaCorrente += umaOutraConta;

    cout << Menor<Conta>(umaConta, umaOutraConta);
    int a = 1, b = 2;
    cout << Menor(a, b);

    cout << "Número de contas: " << Conta::recuperaNumeroDeContas() << endl;

    Gerente umGerente(
        Cpf("000.000.000-00"),
        "Nome do gerente",
        1500,
        DiaDaSemana::Terca,
        "senha"
    );

    outraContaCorrente.sacar(500);

    return 0;
}
