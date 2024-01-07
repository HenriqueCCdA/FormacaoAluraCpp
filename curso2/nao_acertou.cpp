#include<string>
#include<map>

std::string pavavra_secreta = "MELANCIA";
std::map <char, bool> chutou;

bool nao_acertou(void) {
    for(char letra: pavavra_secreta) {
        if(!chutou[letra]) {
            return true;
        }
    }
    return false;
}
