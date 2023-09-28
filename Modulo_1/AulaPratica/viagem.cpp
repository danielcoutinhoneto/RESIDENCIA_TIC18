#include <iostream>

using namespace std;

struct Data_Viagem {
    int dia, mes, ano;
};

void mostrar_data(Data_Eleitor umaData_Eleitor) {
    cout << umaData_Eleitor.dia << "/" << umaData_Eleitor.mes << "/" << umaData_Eleitor.ano << endl;
}

void le_data(Data_Eleitor *novaData_Eleitor) { 
    cin >> novaData_Eleitor->dia >> novaData_Eleitor->mes >> novaData_Eleitor->ano;
}

struct viagem
{
    string idaRJ[5];
    string voltaSP[5];
    string passageiro;
    int cpf;
    int datanasc;
    unsigned poltrona[40];
    int data;
    int valPassagem;

}

int main()
{

}