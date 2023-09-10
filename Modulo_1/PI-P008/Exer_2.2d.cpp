#include <iostream> 
#include <stdio.h> 

using namespace  std;


int main(void){

    int estacoes = 250;
    double temperaturas[estacoes];
    double somaTemperaturas;

    for (int i = 0; i < estacoes; i++) {
        temperaturas[i] = 10.0 + 30.0 * (rand() % 100) / 3000.0;
    }

    for (int i = 0; i < estacoes; i++) {
  
    
    somaTemperaturas += temperaturas[i];

    }

    double temperaturaMedia = somaTemperaturas / estacoes;

    
    for (int i = 0; i < estacoes; i++) {
        if (temperaturas[i] > temperaturaMedia) {
            
            temperaturas[i] += 1.0;
        } else {
            
            temperaturas[i] -= 2.0;
        }
    }

    cout << "atualização das temperaturas " << endl;
    for (int i = 0; i < estacoes; i++) {
        cout << "Estação " << (i + 1) << ": " << temperaturas[i] << endl;
    }

    return 0;
}
