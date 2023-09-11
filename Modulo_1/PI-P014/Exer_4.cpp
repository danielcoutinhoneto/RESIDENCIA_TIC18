#include <iostream>
#include <cmath> 

using namespace std;

float soma(float x, float y) {
    float resultado_soma = x + y;
    return resultado_soma;
}

float Subtracao(float x, float y) {
    float resultado_sub = x - y;
    return resultado_sub;
}

float Multiplicacao(float x, float y) {
    float resultado_mult = x * y;
    return resultado_mult;
}

float divisao(float x, float y) {
    if (y == 0) {
        cerr << "Erro: Divisão por zero!" << endl;
        return 0; 
    }
    float resultado_div = x / y;
    return resultado_div;
}

float raizquadrada(float x) {
    if (x < 0) {
        cerr << "Erro: Raiz quadrada de número negativo!" << endl;
        return 0; 
    }
    float resultado_raiz = sqrt(x);
    return resultado_raiz;
}

float potencia(float x, float y) {
    float resultado_pot = pow(x, y);
    return resultado_pot;
}

float porcentagem(float x, float y) {
    float resultado_porcent = (x * y) / 100.0;
    return resultado_porcent;
}

void menu() {
    cout << "CALCULADORA MATEMÁTICA\n";
    cout << "\nQual cálculo matemático deseja realizar:\n";
    cout << "\n1. Soma\n";
    cout << "2. Subtração\n";
    cout << "3. Multiplicação\n";
    cout << "4. Divisão\n";
    cout << "5. Raiz Quadrada\n";
    cout << "6. Potência\n";
    cout << "7. Porcentagem\n";
}

void operacoes_matematicas() {
    int op;
    float num1, num2;

    cin >> op;

    cout << "Informe o primeiro número:\n";
    cin >> num1;

    if (op != 5) { 
        cout << "Informe o segundo número:\n";
        cin >> num2;
    }

    float resultado;

    switch (op) {
        case 1:
            resultado = soma(num1, num2);
            cout << "O resultado da soma é: " << resultado << endl;
            break;
        case 2:
            resultado = Subtracao(num1, num2);
            cout << "O resultado da subtração é: " << resultado << endl;
            break;
        case 3:
            resultado = Multiplicacao(num1, num2);
            cout << "O resultado da multiplicação é: " << resultado << endl;
            break;
        case 4:
            resultado = divisao(num1, num2);
            cout << "O resultado da divisão é: " << resultado << endl;
            break;
        case 5:
            resultado = raizquadrada(num1);
            cout << "A raiz quadrada é: " << resultado << endl;
            break;
        case 6:
            resultado = potencia(num1, num2);
            cout << "O resultado da potência é: " << resultado << endl;
            break;
        case 7:
            resultado = porcentagem(num1, num2);
            cout << "O resultado da porcentagem é: " << resultado << endl;
            break;
        default:
            cout << "Entrada inválida\n";
    }
}

int main() {
    
    menu();
    operacoes_matematicas();
    cout << "Encerrando...\n";

    return 0;
}
