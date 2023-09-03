#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

int main(void){

    double d = 1.0 / 3.0;
    long double ld = 1.0 / 3.0;

    cout << "Resultado em double: " << setprecision(20) << d << endl;
    cout << "Resultado em long double: " << setprecision(20) << ld << endl;
    

    return 0;
    
}