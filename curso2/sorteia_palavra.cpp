void sortei_palavra() {
    vector<string> palavras = le_arquivo();

    srand(time(NULL));
    int indice_sorteado = rand() % palavras.size();

    pavavra_secreta = palavras[indice_sorteado];
}
