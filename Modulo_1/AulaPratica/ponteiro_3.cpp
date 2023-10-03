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
    vector<Estados> estados;

    int numEstados;
    cout << "Quantos estados deseja adicionar? ";
    cin >> numEstados;
    cin.ignore(); // Limpar o buffer de entrada

    for (int i = 0; i < numEstados; i++) {
        string nomeEstado, siglaEstado;
        cout << "Nome do estado " << i + 1 << ": ";
        getline(cin, nomeEstado);
        cout << "Sigla do estado " << i + 1 << ": ";
        getline(cin, siglaEstado);

        estados.push_back(Estados(nomeEstado, siglaEstado));
    }

    int numCidades;
    cout << "Quantas cidades deseja adicionar? ";
    cin >> numCidades;
    cin.ignore(); // Limpar o buffer de entrada

    for (int i = 0; i < numCidades; i++) {
        string nomeCidade;
        int estadoIndex;
        cout << "Nome da cidade " << i + 1 << ": ";
        getline(cin, nomeCidade);
        cout << "Selecione o estado para a cidade " << i + 1 << " (0-" << numEstados - 1 << "): ";
        cin >> estadoIndex;
        cin.ignore(); // Limpar o buffer de entrada

        if (estadoIndex >= 0 && estadoIndex < numEstados) {
            Cidade novaCidade(nomeCidade, &estados[estadoIndex]);
            estados[estadoIndex].novaCidade(novaCidade);
        } else {
            cout << "Índice de estado inválido. A cidade não será adicionada." << endl;
        }
    }

    // Você pode acessar as informações assim:
    for (const Estados& estado : estados) {
        cout << "Estado: " << estado.getNome() << " (" << estado.getSigla() << ")" << endl;
        cout << "Cidades em " << estado.getNome() << ":" << endl;
        for (const Cidade& cidade : estado.cidades) {
            cout << cidade.getNome() << endl;
        }
        cout << endl;
    }

    return 0;
}

