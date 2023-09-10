#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
     
     
    int tamanhoString = 10;

    string string1 = "";
    string string2 = "";

    for (int i = 0; i < tamanhoString; i++) {
        char caractereAleatorio = 'a' + rand() % ('z' - 'a' + 1);
        string1 += caractereAleatorio;

        caractereAleatorio = 'a' + rand() % ('z' - 'a' + 1);
        string2 += caractereAleatorio;
    }
  
     if (!string1.empty()) {
        string1[0] = toupper(string1[0]);
    }
     if (!string2.empty()) {
        string2[0] = toupper(string2[0]);
    }

    sort(string1.begin(), string1.end());
    sort(string2.begin(), string2.end());

    
    cout << "Strings em ordem alfabética:" << endl;
    cout << "String 1: " << string1 << endl;
    cout << "String 2: " << string2 << endl;

    return 0;
}