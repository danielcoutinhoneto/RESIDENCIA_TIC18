#include <iostream>
#include <stdio.h>

using namespace std;

int main(void) {
    
    int numAlunos = 15;
    float notas[numAlunos];
    int numAlunos2 = 15;
    float notas2[numAlunos2];


    for (int i = 0; i < numAlunos2; i++) {
        notas[i] = ((float)rand() / RAND_MAX) * 10;
        notas2[i] = ((float)rand() / RAND_MAX) * 10;
    }
        

    for (int i = 0; i < numAlunos; i++) {
        cout << "as notas dos alunos são: " << (i + 1) << ": " << notas[i] << endl;
        cout << "as notas da segunda avaliação é " << (i + 1) << ": " << notas2[i] << endl;
    
        if (notas[i] > notas2[i]) 
                cout << "Melhorou" << endl;
           else if (notas[i] < notas2[i]) 
                cout << "Piorou" << endl;
           else 
                cout << "Manteve a nota" << endl;
    }

    return 0;
    }