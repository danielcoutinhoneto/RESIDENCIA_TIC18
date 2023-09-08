#include <iostream>

using namespace std;

int main() {

    // VETOR DE 5 POSIÇÕES

    int vetor[5];

    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;

    cout << vetor[4] << "\n"; // ÚLTIMO ÍNDICE

    /*
    
        O INDICE ABAIXO NÃO EXISTE NO VETOR INFORMADO, POREM ELE PEGOU O LIXO(NÃO É VALOR VÁLIDO), OU SEJA, 
        ELE SAIU FORA DAS POSIÇÕES RESERVADAS E PEGOU UMA POSIÇÃO DA MEMÓRIA.

        PODE GERAR UM ERRO GRAVE DE EXECUÇÃO DO PROGRAMA, DEPENDENDO ONDE ESTÁ A CONDIÇÃO/VETOR.


    */
    cout << vetor[5] << "\n";

    return 0;
}