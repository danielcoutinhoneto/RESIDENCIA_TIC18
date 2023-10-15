#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Cidade 
{
private:
    string nome;
public: 
    Cidade(string cidadeNome) {
        nome = cidadeNome;
    }
};

class Estado 
{
private:
    string nome;
    string sigla;
    vector<Cidade> cidades;

public:
    Estado(string estNome, string uf) {
        nome = estNome;
        sigla = uf;
    }

    void novaCidade(Cidade c) {
        cidades.push_back(c);
    }
};

int main() {
    // Exemplo de uso:
    Estado estado("São Paulo", "SP");
    Cidade cidade1("São Paulo");
    Cidade cidade2("Campinas");
    
    estado.novaCidade(cidade1);
    estado.novaCidade(cidade2);

    // Agora, o objeto "estado" contém duas cidades.
    
    return 0;
}
