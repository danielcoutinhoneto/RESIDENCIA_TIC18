#include <iostream>
#include <vector>

using namespace std;

class Paciente 
{
public:
    string nome;
    string dt_Morte;

    void setNome(string _nome) {
        nome = _nome;
    }

    void setDtMorte(string _Data) {
        dt_Morte = _Data;
    }

    string getNome() {
        return nome;
    }

    string getDtMorte() {
        return dt_Morte;
    }
};

class Mausoleu
{
public:
    string localizacao;
    vector<Paciente> Moradores;

    void setLoc(string _localizacao) {
        localizacao = _localizacao;
    }

    string getLoc() {
        return localizacao;
    }
};

int main()
{
    Paciente p1;
    Mausoleu m1;

    p1.setNome("John Doe");
    cout << "Informando nome da pessoa:\n";
    cout << "================================\n";
    cout << "Nome: " << p1.getNome() << endl;

    cout << endl;

    m1.setLoc("Quadra 10, Mousoleu 110");
    cout << "Informando a localização:\n";
    cout << "================================\n";
    cout << "Localização: " << m1.getLoc() << endl;

    return 0;
}
