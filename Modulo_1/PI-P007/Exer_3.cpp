#include <iostream>

using namespace std;

int main(){
    
    int num, div;

    cout << "Digite um número inteiro: " << endl;
    cin >> num;

     for (div = 1; div <= num; div++) // Números de 1 a 100
    {
        if(num % div == 0)
        {
            cout << "É divisivel por: : " << div << endl;
        }
    }
    return 0;
}