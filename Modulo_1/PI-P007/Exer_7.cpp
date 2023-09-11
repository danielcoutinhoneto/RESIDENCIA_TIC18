#include <iostream>

using namespace std;

int main() {
    int altura;
    cout << "Insira o número para gerar a altura do padrão: ";
    cin >> altura;

    char alturaDoChar = 'A';  // Start with 'A'

    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= i; j++) {
            cout << alturaDoChar;
            alturaDoChar++;
        }
        cout << endl;
    }

    return 0;
}
