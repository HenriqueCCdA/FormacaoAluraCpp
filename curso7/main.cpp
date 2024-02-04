#include <iostream>
#include <string>

void * operator new(size_t bytes)
{
    std::cout << "Alocando " << bytes << " bytes" << std::endl;
    return malloc(bytes);
}

int main() {
    std::cout << "---------------------------" << std::endl;
    std::string meuNomeCompleto = "1234567890123456";
    return 0;
}
