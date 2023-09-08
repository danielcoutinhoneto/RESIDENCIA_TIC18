#include <iostream>

using namespace std;


//FUNÇÃO DE POTENCIAÇÃO
int pot(int base, int expoente) {
    int resultado = 1;
    
    while (expoente > 0) {

        resultado = resultado*base;
        expoente--;
    }
    return resultado;
}

//FUNÇÃO QUE VÊ QUANTAS VEZES O NÚMERO PODE SER DIVIDIDO POR 10
int quat_digit(int numero){
    int cont = 0;

    while(numero >= 1) {
        numero = numero/10;
        cont++;
    }
    return cont;
}

//FUNÇÃO PARA INVERTER O NÚMERO
int inverte(int numero) {

    int invertido = 0, contador = quat_digit(numero);

    
    while(numero>=1)
    {
        invertido = invertido + (numero%10) * pot(10, contador-1);
        contador--;
        numero = numero/10;
    }

    return (invertido);
    
}

int main(){

    int numero;

    cout << "Digite um número inteiro: " << endl;
    cin >> numero;

    if(numero == inverte(numero)){

        cout << numero << " é um número polidromo" << endl;

        } 
        else
        {
        cout << numero << " Não é um número polidromo" << endl;
    }

    return 0; 
}