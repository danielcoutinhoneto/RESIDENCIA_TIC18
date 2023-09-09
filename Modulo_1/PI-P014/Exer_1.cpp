#include <iostream>

using namespace std;

int fat (int n) {
    int fatorial = 1;
    for (int i=1; i<=n; i++)
        fatorial*=i;
    return fatorial; 
}

int main()
{
  int num1, num2, num3;

  cout << "Digite o 1° para saber o fatorial: ";
  cin >> num1;
  cout << "Digite o 2° para saber o fatorial: ";
  cin >> num2;
  cout << "Digite o 3° para saber o fatorial: ";
  cin >> num3;

  int fatorial1 = fat(num1);
  int fatorial2 = fat(num2);
  int fatorial3 = fat(num3);

  cout << "O fatorial do número " << num1 << " é " << fatorial1 << endl;
  cout << "O fatorial do número " << num2 << " é " << fatorial2 << endl;
  cout << "O fatorial do número " << num3 << " é " << fatorial3 << endl;

}