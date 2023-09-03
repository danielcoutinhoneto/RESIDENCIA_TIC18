#include <iostream>
#include <string>
#include <float.h>
#include <iomanip>

using namespace std;

int main(void){

    //float pif, pi = 3.14159265358979323846264338327950288;
    float pif = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679821480865132823066470938446095505822317253594081284811174502841027019385211055596446229489549303819644288109756659334461;

    cout << "Valor de PI com 2 casas decimais: " << fixed << setprecision(2) << pif << endl;
    cout << "Valor de PI com 4 casas decimais: " << fixed << setprecision(4) << pif << endl;
    cout << "Valor de PI com 8 casas decimais: " << fixed << setprecision(8) << pif << endl;
    cout << "Valor de PI com 16 casas decimais: " << fixed << setprecision(16) << pif << endl;

    return 0;
}