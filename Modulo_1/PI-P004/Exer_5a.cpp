#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main(void){

    nt i = 5;
    float f = 0.0;
    double d = 0.5;
    bool b = false;

    if (i) {
        cout << "Int - true" << endl;
    } else {
        cout << "Int - false" << endl;
    }

    if (f) {
        cout << "float - true" << endl;
    } else {
        cout << "float - false" << endl;
    }

    if (d) {
        cout << "double - true" << endl;
    } else {
        cout << "double - false" << endl;
    }

    if (b) {
        cout << "bool - true" << endl;
    } else {
        cout << "bool - false" << endl;
    }

    /*
       Nota-se que independente do tipo, se o valor for maior que 0 ele assume o valor de true.
    */

    return 0;
}