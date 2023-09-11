#include <iostream>
#include <stdio.h> 
using namespace std;

int main(void) {
    double x,y,z;


    cout<< "digite um ponto flutuante " << endl;
    cin >> x;
    cout<< "digite outro ponto flutuante:" << endl;
    cin >> y;

    z= (x<y) ? x : y;

    cout <<"o menor numero é: "<< z << endl;

    return 0;
}