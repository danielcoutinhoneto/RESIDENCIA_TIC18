#include <iostream>
#include <string>
#include <cstring>


using namespace std;

struct jogador 
{
    char nome [40];
    float salario;
    unsigned gols;
};

void exibir(jogador);
jogador ler();

int main()
{
    cout << "Digite as informações do jogador:\n";

    jogador beb = ler(); 
    //jogador b = {"Romário", 800000, 1000};
    exibir(beb);

    jogador rom = beb;
    exibir(rom);


    //cout << "Os jogadores da copa de 94 " << a.nome << " e " << b.nome << "!\n";
    //cout << "Tinham sálarios de R$" << a.salario + b.salario << "!\n"; 



    /*
    strcpy(zico.nome, "Zico");
    zico.nome = "Zico"; //FORMA ERRADA DE ARMAZENA UM VETOR
    zico.salario = 800000;
    zico.goals = 800;

    cout << zico.nome << " fez " << zico.gols << " gols durante sua carreira, e recebia R$" << zico.salario << endl;
    */


}

void exibir(jogador j)
{
    cout << j.nome << " " << j.salario << " " << j.gols << endl;
}

jogador ler()
{
    jogador temp;
    cout << "Nome:\n";
    cin >> temp.nome;
    cout << "Salário:\n";
    cin >> temp.salario;
    cout << "Gols:\n";
    cin >> temp.gols;  

    return temp;
}