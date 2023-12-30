#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<fstream>
#include<ctime>
#include<cstdlib>
#include "nao_acertou.cpp"
#include "letra_exsite.cpp"

using namespace std;

int main() {

    imprime_cabecalho();

    sortei_palavra();

    while(nao_acertou() && nao_enforcou()) {

        imprime_erros();

        imprime_palavra();

        chuta();

    }

    cout << "Fim de jogo!" << endl;
    cout << "A palavra secreta era: " << pavavra_secreta << endl;
    if(nao_acertou()) {
        cout << "Você perdeu! Tente novamente!" << endl;
    } else {
        cout << "Parabéns! Você acertou a palavra secreta!" << endl;

        cout << "Você deseja adicionar u,a nova palavra ao banco? (S/N)" << endl;

        char resposta;
        cin >> resposta;

        if(resposta == 'S') {
            adiciona_palavra();
        }

    }
}
