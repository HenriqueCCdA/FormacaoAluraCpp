#include<string>

string pavavra_secreta = "MELANCIA";

bool letra_existe(char chute) {
    for(char letra: pavavra_secreta) {
        if (chute == letra) {
            return true;
        }
    }
    return false;
}
