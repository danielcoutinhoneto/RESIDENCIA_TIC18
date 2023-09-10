#include <iostream>
#include <stdio.h>

using namespace std;

const int largura = 640;
const int altura = 480;
const int numIntensidades = 256;

int main() {
    
    int imagem[altura][largura];

    
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            imagem[i][j] = rand() % numIntensidades;
        }
    }

    int histograma[numIntensidades] = {0};

    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            int intensidade = imagem[i][j];
            histograma[intensidade]++;
        }
    }

    cout << "Histograma da imagem:" << endl;
    for (int i = 0; i < numIntensidades; i++) {
        cout << "Intensidade " << i << ": " << histograma[i] << " pixels" << endl;
    }

    return 0;
}