#include <iostream>
#include <ctype.h>

using namespace std ;

int main(void) {

    char ch1, ch2, ch3 ; 

    printf ("Digite um caracter: ");
    cin >> ch1;
    printf ("Digite outro caracter: ");
    cin >> ch2;
    printf ("\n");

    ch3 = ch2 -1;

    printf ("O caracter que antecede é: %c\n", ch3);
    printf ("Em decimal é: %d\n", int(ch3)); 
    printf ("Em hexadecimal é: %x\n", (int)ch3);
    printf ("Em octadecimal é: %o\n", (int)ch3);   
    printf ("Caracter:%c\n", ch3);

    return 0;
}