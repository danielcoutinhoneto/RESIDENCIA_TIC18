#include <iostream>
#include <stdio.h> 
using namespace std;

int main(void) {
    int num1, num2, maior;

    cout << "Digite o primeiro número inteiro: ";
    cin >> num1;

    cout << "Digite o segundo número inteiro: ";
    cin >> num2;

    
    maior = (num1 > num2) ? num1 : num2;

    
    cout << "O maior número é: " << maior << endl;

    
    string parImpar = (maior % 2 == 0) ? "par" : "ímpar";
    cout << "Ele é um numero: " << parImpar << endl;

    
    if (num1 == num2) {
        cout << "Estes números são iguais." << endl;
    }

    return 0;
}