#include <iostream>

using namespace std;

int main(void)
{
	int A, B, sum, sub, mult, divs, resto;
	
	cout << "Digite o número A: " << endl;
	cin >> A;
	cout << "Digite o número B: " << endl;
	cin >> B;
	
	sum = A + B;
	sub = A - B;
	mult = A * B;
	divs = A / B;
    resto = A % B;
	
	cout << "soma: " << sum << endl;
	cout << "Subtração: " << sub << endl;
	cout << "Multiplicação: " << mult << endl;
	cout << "Divisão: " << divs << endl;
	cout << "Resto: " << resto << endl;

	return 0;
}