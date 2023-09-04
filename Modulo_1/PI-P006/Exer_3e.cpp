#include <iostream>
#include <stdio.h>

using namespace std ;

int main(void) {

  char ch1,ch2,ch3 ; 

  cout<< "digite um caracter:" << endl;
  cin >> ch1;


  ch3 = (isupper(ch1)? 'A':' ');

  cout << ch3 <<endl;


  return 0;
  
}
