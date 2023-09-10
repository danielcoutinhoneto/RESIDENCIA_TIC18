#include <iostream>
#include <stdio.h>

using namespace std;

int main(void) {
    
    int numAlunos = 15;
    float notas[numAlunos];

    for (int i = 0; i < numAlunos; i++) {
        notas[i] = ((float)rand() / RAND_MAX) * 10;
    }


    for (int i = 0; i < numAlunos; i++) {
        cout << "as notas dos alunos são: " << (i + 1) << ": " << notas[i] << endl;
    }

    return 0;
}