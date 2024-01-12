#include<iostream>

#include "imprime_errors.hpp"

namespace Forca {
    void imprime_erros(const std::vector<char>& chutes_errados) {
        std::cout << "Chutes errados: ";
        for(char letra: chutes_errados){
            std::cout << letra << " ";
        }
        std::cout << std::endl;
    }
}
