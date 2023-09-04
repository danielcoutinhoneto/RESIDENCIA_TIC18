#include <iostream>
#include <stdio.h>

using namespace std ;

int main(void) {

    //Exercício 3 a, b e c.
   
    char ch1,ch2,ch3 ; 

    cout << "digite um caracter:" << endl;
    cin >> ch1;
    cout << "digite outro caracter: "<< endl;
    cin >> ch2;
    cout << endl;

    ch3 = ch1 -1;
    cout << "O caracter que antecede é:" << ch3 << endl;
    cout << "Em decimal é: " << int(ch3) << endl; 
    cout << "Em hexadecimal é: " << hex << (int)ch3 << endl;
    cout << "Em octadecimal é: " << oct << (int)ch3 << endl ;   
    cout << ch3 << " '__' " <<endl;

    return 0;
}