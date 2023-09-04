#include <iostream>
#include <stdio.h>

using namespace std ;

int main(void) {

    // Exercício 2: Operações com inteiros: letras a, b, c e d.

    int a,b,c;

    cout<< "digite um numero inteiro: "<<endl;
    cin >> a ;
    
    cout << "digite outro numero inteiro: "<<endl;
    cin >> b ;

    c = 4 * a + b / 3 - 5;

    cout << "O resultado da expressão é: " << c << endl;


    return 0;
}
