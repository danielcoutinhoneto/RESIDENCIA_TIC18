#include <iostream>
#include <string>

using namespace std;

struct Empregado {
    string nome;
    string sobrenome;
    int ano_nascimento;
    string RG;
    int ano_admissao;
    double salario;
};

void Reajusta_dez_porcento(Empregado empregados[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        empregados[i].salario *= 1.10;  
    }
}

int main() {
    const int MAX_EMPREGADOS = 50;
    Empregado empregados[MAX_EMPREGADOS];

    
    empregados[0] = {"João", "Silva", 1980, "12345", 2010, 3000.0};
    empregados[1] = {"Maria", "Santos", 1990, "67890", 2015, 3500.0};

    
    int numero_empregados = 2;

    cout << "Salários antes do reajuste:" << endl;
    for (int i = 0; i < numero_empregados; i++) {
        cout << empregados[i].nome << " " << empregados[i].sobrenome << ": R$" << empregados[i].salario << endl;
    }

    
    Reajusta_dez_porcento(empregados, numero_empregados);

    cout << "\nSalários após o reajuste:" << endl;
    for (int i = 0; i < numero_empregados; i++) {
        cout << empregados[i].nome << " " << empregados[i].sobrenome << ": R$" << empregados[i].salario << endl;
    }

    return 0;
}
