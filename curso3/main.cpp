#include<iostream>
#include<string>

using namespace std;

struct Conta
{
    string numero;
    string cpfTitular;
    string nomeTitular;
    float saldo;

};

void sacar(Conta& conta, float valorASacar)
{
    if(valorASacar < 0) {
        cout << "Não pode sacar valor negativo" << endl;
        return;
    }

    if(valorASacar > conta.saldo) {
        cout << "Saldo insuficiente" << endl;
        return;
    }
    conta.saldo -= valorASacar;
}

void depositar(Conta& conta, float valorADepositar)
{
    conta.saldo += valorADepositar;
}

int main() {

    Conta umaConta;
    umaConta.numero = "123456";
    umaConta.cpfTitular = "123.456.789-10";
    umaConta.nomeTitular = "Vinicius";
    umaConta.saldo = 100;

    Conta umaOutraConta;
    umaOutraConta.saldo = 200;

    depositar(umaOutraConta, 500);

    cout << "Uma conta: " << umaConta.saldo << " Outra conta: " << umaOutraConta.saldo << endl;

    return 0;
}
