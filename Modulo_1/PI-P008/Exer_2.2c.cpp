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

    cout<< "a media das temperaturas são: "<< temperaturaMedia<< endl;

    return 0;
}