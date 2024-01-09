#include<vector>

extern std::vector<char> chutes_errados;

bool nao_enforcou(void) {
    return chutes_errados.size() < 5;
}
