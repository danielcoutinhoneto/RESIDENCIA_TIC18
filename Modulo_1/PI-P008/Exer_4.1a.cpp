#include <iostream>
#include <stdio.h>

using namespace std;

const int largura = 640;
const int altura = 480;

int main() {

    int imagem[altura][largura];

    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            imagem[i][j] = rand() % 256;
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << imagem[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}