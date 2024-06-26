#ifndef Avaliador_hpp
#define Avaliador_hpp
#include <vector>
#include "Leilao.hpp"

class Avaliador
{
private:
    float maiorValor = INT32_MIN;
    float menorValor = INT32_MAX;
    std::vector<Lance> maiores3Lances;
    static bool ordenaLances(const Lance&, const Lance&);

public:
    void avalia(Leilao);
    float recuperaMaiorValor() const;
    float recuperaMenorValor() const;
    std::vector<Lance> recupera3MaioresLances() const;
};

#endif
