#include <iostream>
#include <string>
#include <map>

string palavra_secreta;
map<char, bool> chutou;

void imprime_palavra(void) {
    for(char letra: pavavra_secreta) {
        if(chutou[letra]) {
            std::cout << letra << " ";
        } else {
            std::cout << "_ ";
        }
    }
    std::cout << std::endl;
}
