#include "nao_acertou.hpp"

extern std::string palavra_secreta;
extern std::map <char, bool> chutou;

bool nao_acertou(std::string palavra_secreta, std::map <char, bool> chutou) {
    for(char letra: palavra_secreta) {
        if(!chutou[letra]) {
            return true;
        }
    }
    return false;
}
