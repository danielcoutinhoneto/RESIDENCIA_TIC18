#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main() {
    srand(time(nullptr));

    int numStrings = 10;
    vector<string> stringList;

    for (int i = 0; i < numStrings; i++) {
        string randomString = "";

        for (int j = 0; j < 5; j++) {
            char randomChar = 'a' + rand() % 26; // Gera caracteres de 'a' a 'z'
            randomString += randomChar;
        }

        // Garanta que o primeiro caractere seja maiúsculo, se a string não estiver vazia
        if (!randomString.empty()) {
            randomString[0] = toupper(randomString[0]);
        }

        stringList.push_back(randomString);
    }

    cout << "Lista de strings aleatórias:" << endl;
    for (int i = 0; i < numStrings; i++) {
        cout << "String " << i + 1 << ": " << stringList[i] << endl;
    }

    return 0;
}
