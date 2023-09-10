#include <iostream> 
#include <stdio.h> 
#include <limits>
using namespace  std;


int main(void){

    int estacoes = 250;
    double temperaturas[estacoes];


    for (int i = 0; i < estacoes; i++) {
        temperaturas[i] = 10.0 + 30.0 * (rand() % 100) / 3000.0;
    }

    double temperaturaMaxima = numeric_limits<double>::min();
    double temperaturaMinima = numeric_limits<double>::max();


    for (int i = 0; i < estacoes; i++) {
        if (temperaturas[i] > temperaturaMaxima) {
            temperaturaMaxima = temperaturas[i];
        }
        if (temperaturas[i] < temperaturaMinima) {
            temperaturaMinima = temperaturas[i];
        }
    }


    cout << "a maior temperatura é " << temperaturaMaxima << endl;
    cout << "a menor temperatura é " << temperaturaMinima << endl;

    return 0;
}