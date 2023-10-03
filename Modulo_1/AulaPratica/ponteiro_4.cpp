#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Estados; // Declaração antecipada da classe Estados

class Cidade {
private:
    string nome;
    Estados* estado;

public:
    Cidade(string cidadeNome, Estados* est) {
        nome = cidadeNome;
        estado = est;
    }

    string getNome() const {
        return nome;
    }
};

class Estados {
private:
    string nome;
    string sigla;

public:
    vector<Cidade> cidades; // Agora cidades é pública

    Estados(string estNome, string uf) {
        nome = estNome;
        sigla = uf;
    }

    void novaCidade(Cidade c);

    string getNome() const {
        return nome;
    }

    string getSigla() const {
        return sigla;
    }
};

void Estados::novaCidade(Cidade c) {
    cidades.push_back(c);
}

int main() {
    Estados estado1("Sao Paulo", "SP");
    Estados estado2("Rio de Janeiro", "RJ");

    Cidade cidade1("Sao Paulo", &estado1);
    Cidade cidade2("Campinas", &estado1);
    Cidade cidade3("Rio de Janeiro", &estado2);
    Cidade cidade4("Niteroi", &estado2);

    estado1.novaCidade(cidade1);
    estado1.novaCidade(cidade2);
    estado2.novaCidade(cidade3);
    estado2.novaCidade(cidade4);

    // Você pode acessar as informações assim:
    cout << "Estado: " << estado1.getNome() << " (" << estado1.getSigla() << ")" << endl;
    cout << "Cidades em " << estado1.getNome() << ":" << endl;
    for (const Cidade& cidade : estado1.cidades) {
        cout << cidade.getNome() << endl;
    }

    cout << endl;
    cout << "<*******************************>\n\n";

    cout << "Estado: " << estado2.getNome() << " (" << estado2.getSigla() << ")" << endl;
    cout << "Cidades em " << estado2.getNome() << ":" << endl;
    for (const Cidade& cidade : estado2.cidades) {
        cout << cidade.getNome() << endl;
    }

    return 0;
}


//Digitar os dados para aparecer