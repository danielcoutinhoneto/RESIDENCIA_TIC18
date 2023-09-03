#include <iostream>
#include <stdio.h>
using namespace std ;

int main(void) {

char ch1,ch2,ch3 ; 

cout<< "digite um caracter:" << endl;
cin >> ch1;
cout << "digite outro caracter: "<< endl;
cin >> ch2;

ch3 = ch1 -1;

cout << "o caracter antecedente é:" << ch3 <<endl << (int)ch3 << " hex:" << hex << (int)ch3 << " oct: " << oct << (int)ch3<< endl ;   

cout<< "o caracter que antecede o digitado é: "<< ch3 << endl ;
    return 0;
}