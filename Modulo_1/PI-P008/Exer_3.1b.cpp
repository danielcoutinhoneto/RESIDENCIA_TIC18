#include <iostream>
#include <sstream>
#include <string>

using namespace std;

bool isDataValida(int dia, int mes, int ano) {
    if (mes < 1 || mes > 12)
        return false;

    if (dia < 1)
        return false;

    if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30)
        return false;

    if (mes == 2) {
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
            if (dia > 29)
                return false;
        } else {
            if (dia > 28)
                return false;
        }
    }

    if (dia > 31)
        return false;

    return true;
}

int main(void) {
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

    if (isDataValida(dia, mes, ano)) {
        cout << "Data válida:" << endl;
        cout << "Dia: " << dia << endl;
        cout << "Mês: " << mes << endl;
        cout << "Ano: " << ano << endl;
    } else {
        cout << "Data inválida." << endl;
    }

    return 0;
}