#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

int main(void){

    float menorValorFloat = numeric_limits<float>::min();
    float maiorValorFloat = numeric_limits<float>::max();

    cout << "Menor valor em float: " << menorValorFloat << endl;
    cout << "Maior valor em float: " << maiorValorFloat << endl;

    return 0;
}