#include <iostream>
#include <string>

using namespace std;

struct Carro
{
    string nome;
    string cor;
    int pot;
    int velMax;
    int vel;

    void insereCar(string stnome, string stcor, int stpot, int stvelMax)
{
    nome = stnome;
    cor = stcor;
    pot = stpot;
    velMax = stvelMax;
    vel = 0;
}

void mostraCar()
{
    cout << "\nNome...........: " << nome << endl;
    cout << "Cor..............: " << cor << endl;
    cout << "Potência.........: " << pot << endl;
    cout << "Velocidade Atual.: " << vel << endl;
    cout << "Velocidade Máxima: " << velMax << endl;
}

void mudaVel(int mv)
{
    vel = mv;

    if(vel > velMax)
    {
        vel = velMax;
    }
    if(vel < 0)
    {
        vel = 0;
    }
}
};



int main()
{
    Carro car1, car2;


    car1.insereCar("Ferrari","vermelho", 300, 250);

    car2.insereCar("BMW M Competition", "Azul", 280, 200);

    car1.mostraCar();
    car2.mostraCar();

    car1.mudaVel(150);
    car1.mostraCar();
    car2.mudaVel(1500);
    car2.mostraCar();

    return 0;
}