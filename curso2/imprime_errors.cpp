#include<vector>
#include<iostream>

std::vector<char> chutes_errados;

void imprime_erros(void) {
    std::cout << "Chutes errados: ";
    for(char letra: chutes_errados){
        std::cout << letra << " ";
    }
    std::cout << std::endl;
}