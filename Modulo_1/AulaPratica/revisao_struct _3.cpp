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
    cout << "\nNome.............: " << nome << endl;
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
    Carro *carros = new Carro[3];
    Carro car1, car2, car3;

    carros[0] = car1;
    carros[1] = car2;
    carros[2] = car3;

    carros[0].insereCar("Ferrari","vermelho", 300, 250);
    carros[1].insereCar("BMW M Competition", "Azul", 280, 220);
    carros[2].insereCar("Gof Type R", "Azul", 250, 200);

    for(int i=0; i < 3; i++)
    {
        carros[i].mostraCar();
    }

    return 0;
}