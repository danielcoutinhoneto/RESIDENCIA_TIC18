#include <iostream>
#include <string>
#include <float.h>
#include <iomanip>

using namespace std;

int main(void)
{
    float pi = 3.14159265358979323846;
    double pid = pi;

    cout << "Valor de PI e com 2 casas decimais: " << fixed << setprecision(2) << pi << endl;
    cout << "Valor de PI e com 4 casas decimais: " << fixed << setprecision(4) << pi << endl;
    cout << "Valor de PI e com 8 casas decimais: " << fixed << setprecision(8) << pi << endl;
    cout << "Valor de PI e com 16 casas decimais: " << fixed << setprecision(16) << pi << endl;

    cout << endl;
    cout << "=====================================================================================" << endl;
    cout << endl;

    cout << "Valor de PID com 2 casas decimais: " << fixed << setprecision(2) << pid << endl;
    cout << "Valor de PID com 4 casas decimais: " << fixed << setprecision(4) << pid << endl;
    cout << "Valor de PID com 8 casas decimais: " << fixed << setprecision(8) << pid << endl;
    cout << "Valor de PID com 16 casas decimais: " << fixed << setprecision(16) << pid << endl;
    
    // Aparentimente nenhuma diferença
    return 0;
}