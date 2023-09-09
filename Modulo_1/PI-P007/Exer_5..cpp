#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    int numSis, numUser, tentativas = 0;

    srand(time(0)); // Função semente que gera números aleatórios.

    numSis = 1 + rand() % 100; // Gera número de 1 até 100.

    while (true) {
        cout << "Adivinhe qual será o número que o sistema irá gerar: ";
        cin >> numUser;
        tentativas++;

        if (numSis == numUser) {
            cout << "O palpite está correto" << endl;
            break; // Sai do loop quando adivinhar corretamente.
        } else if (numSis < numUser) {
            cout << "O palpite está alto" << endl;
        } else {
            cout << "O palpite está baixo" << endl;
        }
    }

    cout << "O número aleatório gerado foi: " << numSis << endl;
    cout << "Você acertou em " << tentativas << " tentativas." << endl;

    return 0;
}

/*

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    
    int numSis, numUser;

    srand(time(0)); // Função semnete que gera números aleatórios.

    numSis = 1+rand()%100; // Gera n° de 0 ate 99 com rand puro, e 1+rand 1 até 100

    cout << "Adivinhe qual será o número que o sistema irá gerar: ";
    cin >> numUser;

    if(numSis == numUser) {
        cout << "O palpite está correto" << endl;
    }
    else if(numSis != numUser && numSis < numUser) {
        cout << "O palpite está alto" << endl;
    }
    else
    {
        cout << "O palpite está baixo" << endl;   
    }

    cout << "O número aleatório gerado foi: " << numSis << endl;

    return 0;

}

*/