#include <iostream>
#include <string>
#include <stdio.h>

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

    cout << "String 1: " << string1 << endl;
    cout << "String 2: " << string2 << endl;

    return 0;
}