# include <iostream>

using namespace std;

struct Carro
{
    string nome;
    string cor;
    int pot;
    int velMax;
};

int main()
{
    Carro car1;
    Carro car2;

    car1.nome = "Ferrari";
    car1.cor = "vermelho";
    car1.pot = 300;
    car1.velMax = 250;

    car2.nome = "BMW M Competition";
    car2.cor = "Azul";
    car2.pot = 280;
    car2.velMax = 200;

    cout << "Nome.............: " << car1.nome << endl;
    cout << "Cor..............: " << car1.cor << endl;
    cout << "Potência.........: " << car1.pot << endl;
    cout << "Velocidade Máxima: " << car1.velMax << endl;

    cout << endl;
    cout << "===================" << endl;
    cout << endl;

    cout << "Nome.............: " << car2.nome << endl;
    cout << "Cor..............: " << car2.cor << endl;
    cout << "Potência.........: " << car2.pot << endl;
    cout << "Velocidade Máxima: " << car2.velMax << endl;

    return 0;
}