#include<iostream>
#include<string>
#include<map>
#include<vector>
#include "adiciona_palavra.hpp"
#include "chuta.hpp"
#include "imprime_cabecalho.hpp"
#include "imprime_errors.hpp"
#include "imprime_palavra.hpp"
#include "le_arquivo.hpp"
#include "letra_existe.hpp"
#include "nao_acertou.hpp"
#include "salva_arquivo.hpp"
#include "sorteia_palavra.hpp"


using namespace std;

string palavra_secreta;
map<char, bool> chutou;
vector<char> chutes_errados;

int main() {

    imprime_cabecalho();

    palavra_secreta = sorteia_palavra();

    while(nao_acertou(palavra_secreta, chutou) && chutes_errados.size() < 5) {

        imprime_erros(chutes_errados);

        imprime_palavra(palavra_secreta, chutou);

        chuta(&chutou, &chutes_errados);

    }

    cout << "Fim de jogo!" << endl;
    cout << "A palavra secreta era: " << palavra_secreta << endl;
    if(nao_acertou(palavra_secreta, chutou)) {
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