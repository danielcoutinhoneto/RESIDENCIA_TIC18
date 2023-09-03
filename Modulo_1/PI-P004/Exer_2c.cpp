// EXERCÍCIO 2c

#include <iostream>
using namespace std;
int main()
{
    int a;
    char aa;

cout << endl;
cout <<" Digite um caracter qualquer:  ";
cin >> aa;

cout << "____________________________________________________________" << endl;
cout << endl;

a = (int)aa;

cout << " Na tabela ASCII o caractere " << aa << " é "<< a;
cout << endl;

cout << "____________________________________________________________" << endl;
cout << endl;


cout <<" O caractere em hexadecimal é "; 

cout << hex << int(a); 
cout << endl;

cout << "____________________________________________________________" << endl;
cout << endl;

cout <<" O caractere em octadecimal é "; 

cout << oct << int(a); 
cout << endl;

cout << "____________________________________________________________" << endl;
cout << endl;
    
return 0;
}