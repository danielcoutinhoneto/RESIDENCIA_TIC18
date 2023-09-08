#include <iostream>

using namespace std;

int main() {

    int i;

    for (i=1; i<=100; i++) // Números de 1 a 100
    {

        //cout << i << " (Números de 1 a 100) " << endl;

        //cout << "=================" << endl;

        if((i % 3 == 0) && (i % 5 == 0)) // Para múltiplos de ambos (3 e 5)
        {
            cout << i << " FizzBuzz " << endl;
            cout << "===========" << endl;
        }
        else if(i % 3 == 0) // Para múltiplos de 3
        {
            cout << i << " Fizz " << endl;
            cout << "===========" << endl;
        }
        else if(i % 5 == 0) // Para múltiplos de 3
        {
            cout << i << " Buzz " << endl;
            cout << "===========" << endl;
        }
    }

    return 0;

}