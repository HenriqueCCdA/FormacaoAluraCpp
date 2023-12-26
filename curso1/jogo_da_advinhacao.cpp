#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {
    cout << "***************************************" << endl;
    cout << "* Bem-vindos aao jogo da adivinhação! *" << endl;
    cout << "***************************************" << endl;

    cout << "Escolha o seu nível de dificuldade: " << endl;
    cout << "Fácil (F), Médio (M) ou Difícil (D)" << endl;

    char dificuldade;
    cin >> dificuldade;

    int numero_de_tentaticas;

    if(dificuldade == 'F') {
        numero_de_tentaticas = 15;
    } else if(dificuldade == 'M') {
        numero_de_tentaticas = 10;
    } else {
        numero_de_tentaticas = 5;
    }

    srand(time(NULL));
    const int NUMERO_SECRETO = rand() % 100;
    int tentativas;

    bool nao_acertou = true;

    double pontos = 1000.0;

    for(tentativas=1; tentativas <= numero_de_tentaticas; tentativas++) {
        int chute;
        cout << "Tentativa " << tentativas << endl;
        cout << "Qual seu chute ? ";
        cin >> chute;

        double pontos_perdidos = abs(chute - NUMERO_SECRETO) / 2.0;
        pontos -= pontos_perdidos;

        cout << "O valor do seu chute é: " << chute << endl;

        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;

        if(acertou) {
            cout << "Parabéns! Você acertou o número sercreto!" << endl;
            nao_acertou = false;
            break;
        } else if(maior) {
            cout << "Seu chute foi MAIOR que o número secreto!" << endl;
        } else {
            cout << "Seu chute foi MENOR que o número secreto!" << endl;
        }
    }
    cout << "Fim do Jogo!" << endl;
    if(nao_acertou) {
        cout << "Você perdeu! O número secreto era: " << NUMERO_SECRETO << ". Tente novamente!" << endl;
    } else {
        cout << "Você acertou o número secreto em " << tentativas << " tentativas" << endl;
        cout.precision(2);
        cout << fixed;
        cout << "Sua pontuação foi de " << pontos << " pontos." << endl;
    }
}
