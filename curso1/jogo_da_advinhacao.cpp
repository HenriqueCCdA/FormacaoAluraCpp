#include<iostream>

using namespace std;

int main() {
    cout << "***************************************" << endl;
    cout << "* Bem-vindos aao jogo da adivinhação! *" << endl;
    cout << "***************************************" << endl;

    const int NUMERO_SECRETO = 42;

    bool nao_acertou = true;
    int tentativas = 0;

    while(nao_acertou) {
        tentativas++;
        int chute;
        cout << "Tentativa " << tentativas << endl;
        cout << "Qual seu chute ? ";
        cin >> chute;

        cout << "O valor do seu chute é: " << chute << endl;

        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;

        if(acertou) {
            cout << "Parabéns! VocÊ acertou o número sercreto!" << endl;
            nao_acertou = false;
        } else if(maior) {
            cout << "Seu chute foi maior que o número secreto!" << endl;
        } else {
            cout << "Seu chuto foi menor que o número secreto!" << endl;
        }
    }

    cout << "Fim do Jogo!" << endl;
    cout << "Você acertou o número secreto em " << tentativas << " tentativas" << endl;
}
