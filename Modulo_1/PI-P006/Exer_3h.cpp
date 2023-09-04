#include <iostream>
#include <stdio.h> 
using namespace std;

int main(void) {

    /*

    Escreva um programa que:
    a. peça ao usuário para fornecer dois números inteiros, obtenha-os da
    entrada padrão, usando cin, e imprima o maior deles seguido das
    palavras “e maior”.
    b. Se os números foram iguais, imprima a mensagem “estes
    nú meros sã o iguais”. Use apenas o operador condicional (?).
    c. Identifique se o maior valor é um número par ou ímpar.
    
    */

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