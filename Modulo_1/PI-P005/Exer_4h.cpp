#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double raio;
    
    
    cout << "Digite o raio do círculo: ";
    cin >> raio;
    
    
    double diam = 2 * raio;
    
    
    double circ = 2 * M_PI * raio;
    
    
    double area = M_PI * pow(raio, 2);
    
    
    cout << "Diâmetro: " << diam << endl;
    cout << "Circunferência: " << circ << endl;
    cout << "Área: " << area << endl;
    
    return 0;
}