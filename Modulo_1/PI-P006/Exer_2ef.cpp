#include <iostream>
#include <stdio.h>

using namespace std ;

int main(void) {

    // Exercício 2: Operações com inteiros: letras E e F;

    int a,b,c;

    cout<<"digite um numero inteiro: "<<endl;
    cin >> a ;
    
    cout << "digite outro numero inteiro: "<<endl;
    cin >> b ;

    c= 4 * (a + b) / (3 - 5);

    cout << "O resultado da expressão é: " << c << endl;


    return 0;
}

/* RESPOSTA DA QUESTÃO 2f.

    Ambas expressões tem como precedência os operadores aritmétcos, porém na primeira expressão "4 * a + b / 3 - 5" 
    tem como precedencia os sinas de cálculo "*, /, +, -", já a segunda expressão "4 * (a + b) / (3 - 5)" começa pelos 
    parêntes e depois que vai para os sinas de operação.

*/
