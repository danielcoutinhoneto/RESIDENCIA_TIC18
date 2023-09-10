#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string data;

    cout << "Digite a data no formato dd/mm/aaaa: ";
    getline(cin, data);

    istringstream ss(data);
    string diaStr, mesStr, anoStr;

    getline(ss, diaStr, '/');
    getline(ss, mesStr, '/');
    getline(ss, anoStr);

    int dia = stoi(diaStr);
    int mes = stoi(mesStr);
    int ano = stoi(anoStr);

    cout << "Dia: " << dia << endl;
    cout << "Mês: " << mes << endl;
    cout << "Ano: " << ano << endl;

    return 0;
}

