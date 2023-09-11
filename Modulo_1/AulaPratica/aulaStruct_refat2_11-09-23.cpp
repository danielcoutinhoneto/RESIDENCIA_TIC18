#include <iostream>

using namespace std;

struct Data_Eleitor {
    int dia, mes, ano;
};

void mostrar_data(Data_Eleitor umaData_Eleitor) {
    cout << umaData_Eleitor.dia << "/" << umaData_Eleitor.mes << "/" << umaData_Eleitor.ano << endl;
}

void le_data(Data_Eleitor *novaData_Eleitor) { 
    cin >> novaData_Eleitor->dia >> novaData_Eleitor->mes >> novaData_Eleitor->ano;
}

struct Titulo_Eleitor {
    string nome;
    Data_Eleitor dt_nasc;
    string num_inscr; 
    string zona, secao;
    string municipio, uf;
    Data_Eleitor dt_emissao;
};

void imprimirTitulo(Titulo_Eleitor titulo){

    cout <<"------ Título de Eleitor ------" << endl;
    cout << "Nome: " << titulo.nome << endl;
    mostrar_data(el.dt_nasc);
    cout << "Número de Inscrição: " << el.num_inscr << endl;
    cout << "Zona: " << el.zona << " Seção: " << el.secao << endl;
    cout <<"Municipio: " << el.municipio << " UF: " << el.uf << endl;
    //cout <<"Data de emissão: " << ;
    mostrar_data(el.dt_emissao);
}

int main(){

    Titulo_Eleitor el;

    cout << "Digite o nome do eleitor: ";
    getline(cin, el.nome);
    cout <<"Digite a data de nascimento: ";
    le_data(&el.dt_nasc);
    cout <<"Digite o número de inscrição: ";
    cin >> el.num_inscr;
    cout << "Digite a zona e a seção: ";
    cin >> el.zona >> el.secao;
    cout <<"Digite o Municipio e UF: ";
    cin >> el.municipio >> el.uf;
    cout <<"Digite a data de emissão: ";
    le_data(&el.dt_emissao);

    cout << endl << endl << endl;

    cout <<"------ Título de Eleitor ------" << endl;
    cout << "Nome: " << el.nome << endl;
    mostrar_data(el.dt_nasc);
    cout << "Número de Inscrição: " << el.num_inscr << endl;

    cout << "Zona: " << el.zona << " Seção: " << el.secao << endl;
    cout <<"Municipio: " << el.municipio << " UF: " << el.uf << endl;
    //cout <<"Data de emissão: " << ;
    mostrar_data(el.dt_emissao);

    cout << "------------------------------" << endl;
    cout << endl << endl;

    return 0;

}


//cria um vector para cadastrar uns 10 titulos
//refatorar a parte de imprimir e solicitar dados do usúario