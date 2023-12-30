#include<string>
#include<map>

string pavavra_secreta = "MELANCIA";
map <char, bool> chutou;

bool nao_acertou(void) {
    for(char letra: pavavra_secreta) {
        if(!chutou[letra]) {
            return true;
        }
    }
    return false;
}
