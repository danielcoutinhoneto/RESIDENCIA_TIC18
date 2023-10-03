#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Estado 
{
    private:
    string nome;
    string sigla;
    vector<Cidade> cidades;

    public:
    Estados(string estNome, string uf) {
        nome = estNome;
        sigla = uf;
    }
    void novaCidade(Cidade c) {
        cidades.push_back(c);
    }
};

class Cidade 
{
    private:
    string nome;
    public: 
    Cidade(string estNome) {
        nome = estNome;

    }

};

int main() {
    
}