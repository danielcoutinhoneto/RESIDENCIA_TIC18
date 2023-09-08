#include <iostream>
#include <cmath>

using namespace std;

// O número primo é divisivel apenas por ele mesmo.
// 1 até 100

int main() {

    int aux, coun, Max=100, div;

    //cout << "Digite um número qualquer: " << endl;
    //cin >> x;

    cout << " Os números primos de 1 até 100 são: " << endl;

    for(aux=2 ; aux<=Max ; aux++){
        div=0;

        for(coun=2; coun<=sqrt(aux); coun++)
            if(aux%coun==0)
            div++;

        if(!div) 
            cout << aux << " ";
        
    }

    cout << endl;

    return 0;
}