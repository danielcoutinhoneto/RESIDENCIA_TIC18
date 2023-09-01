#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(void)
{
	float A, B; 
	float sum, sub, mult, divs;
	
	cout << "Digite o número A: " << endl;
	cin >> A;
	cout << "Digite o número B: " << endl;
	cin >> B;
	
	sum = A + B;
	sub = A - B;
	mult = A * B;
	divs = A / B;
	
	float aprox = floorf(divs * 10) / 10;
	
	cout << fixed << setprecision(1);
	cout << "soma: " << sum << endl;
	cout << "Subtração: " << sub << endl;
	cout << "Multiplicação: " << mult << endl;
	cout << "Divisão: " << aprox << endl;
	

	return 0;
}