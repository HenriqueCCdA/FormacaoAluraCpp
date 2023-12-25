#include<iostream>

using namespace std;

int main() {
    cout << "***************************************" << endl;
    cout << "* Bem-vindos aao jogo da adivinhação! *" << endl;
    cout << "***************************************" << endl;

    int numero_secreto = 42;

    int chute;
    cout << "Qual seu chute ? ";
    cin >> chute;
    cout << "O valor do seu chute é: " << chute << endl;

    if(chute == numero_secreto) {
        cout << "Parabéns! VocÊ acertou o número sercreto!" << endl;
    } else if(chute > numero_secreto) {
        cout << "Seu chute foi maior que o número secreto!" << endl;
    } else {
        cout << "Seu chuto foi menor que o número secreto!" << endl;
    }


}
