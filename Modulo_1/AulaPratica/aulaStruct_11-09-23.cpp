#include <iostream>

using namespace std;

void mostrar_data(int dia, int mes, int ano){
    
}

struct Titulo_Eleitor {

    string nome;
    int dia_nasc, mes_nasc, ano_nasc;
    string num_inscr;
    string municipio, uf;
    int dia_emissao, mes_emissao, ano_emissao;
};

int main(){

    Titulo_Eleitor el;

    cout << "Digite o nome do eleitor: ";
    getline(cin, el.nome);
    cout <<"Digite a data de nascimento: \n";
    cin >> el.dia_nasc >> el.mes_nasc >> el.ano_nasc;
    cout << endl << endl << endl;

    cout << "Nome: " << el.nome << endl;
    cout << "Data de Nascimento: " << el.dia_nasc << "/" << el.mes_nasc << "/" << el.ano_nasc;
    cout << endl << endl;

}