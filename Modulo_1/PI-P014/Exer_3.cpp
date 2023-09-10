#include <iostream>
#include <cmath>

using namespace std;

struct Ponto {
    int xA; 
    int xB; 
    int yA; 
    int yB;
} dois_pontos_ref;

int distancia(int xA, int xB, int yA, int yB){
   
    // Informativo no final do código 
    int distancia_pontos = sqrt(pow((xB - xA), 2) + pow((yB - yA), 2)); 
    

    return distancia_pontos;
}

void entrada_dados() {
    int aX, bX, aY, bY;

    cout << "Informe o valor do ponto Xa: ";
    cin >> aX;
    cout << "Informe o valor do ponto Ya: ";
    cin >> aY;
    cout << "Informe o valor do ponto Xb: ";
    cin >> bX;
    cout << "Informe o valor do ponto Yb: ";
    cin >> bY;

    int d = distancia(aX, bX, aY, bY);

    cout << endl;
    cout << "A distância entre A e B é: " << d << endl; 
}

int main(){

    entrada_dados();

    return 0;
}

    /* 
    
        AFórmula da distância entre dois pontos tem 3° casos

        Caso 1°: 
        Quando AB é paralelo ao eixo 0x, onde a diistância é o modulo da diferença entre as abscissas.

        Ex:
        int distancia_pontos = (xB - xA);

        Caso 1°: 
        Quando AB é paralelo ao eixo 0y, onde a diistância é o modulo da diferença entre as ordenadas.

        Ex:
        int distancia_pontos = (yB - yA);


        Caso 3°: 
        Quando A e B não é paralelo a nenhum eixo, e com isso depende da diferença entre abscissas e ordenadas.

        Ex: Usado no código
    */ 