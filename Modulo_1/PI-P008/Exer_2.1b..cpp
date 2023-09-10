#include <iostream> 
#include <stdio.h> 
using namespace  std;


int main(void){

int a=20;
int vetorA[a];

for (int i=0;i<20;i++){

    vetorA[i]= 1+ rand()%20;

}

    int b = 20;
    int frequencia[b] = {0};

    
    for (int i = 0;i < a; i++) {
        int valor = vetorA[i];
        frequencia[valor- 1]++;
    }

    
    for (int i = 0; i < b; i++) {
        cout << "Valor " << (i + 1) << " aparece " << frequencia[i] << " vezes." << endl;
    }

    return 0;
}
