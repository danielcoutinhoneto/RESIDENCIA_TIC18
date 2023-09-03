#include <iostream>
#include <stdio.h>
using namespace std ;

int main(void) {

char ch1,ch2,ch3 ; 

cout<< "digite um caracter:" << endl;
cin >> ch1;
cout << "digite outro caracter: "<< endl;
cin >> ch2;

ch3 = ch2 -1;

cout<< "o caracter que antecede o digitado é: "<< ch3 << endl ;
    return 0;
}