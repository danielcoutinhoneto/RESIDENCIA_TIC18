#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Clientes; // Declaração antecipada da classe Clientes

class Dependente {
private:
    string nome;
    string cpf;
    int id; // Adicione um ID para o dependente
    Clientes* cliente;

public:
    Dependente(string DependenteNome, string DependenteCPF, Clientes* cli, int DependenteID) {
        nome = DependenteNome;
        cpf = DependenteCPF;
        cliente = cli;
        id = DependenteID; // Inicialize o ID do dependente
    }

    string getNome() const {
        return nome;
    }

    string getCPF() const {
        return cpf;
    }

    int getID() const {
        return id;
    }
};

class Clientes {
private:
    string nome;
    string sobrenome;
    string cpf;
    int id; // Adicione um ID para o cliente
    static int proximoID; // Variável estática para controlar o próximo ID a ser atribuído

public:
    vector<Dependente> Dependentes;

    Clientes(string estNome, string estSobrenome) {
        nome = estNome;
        sobrenome = estSobrenome;
        cpf = ""; // Você pode adicionar a lógica para definir o CPF do cliente se necessário
        id = proximoID++; // Atribui o próximo ID disponível ao cliente
    }

    void novoDependente(Dependente c) {
        Dependentes.push_back(c);
    }

    string getNome() const {
        return nome;
    }

    string getSobrenome() const {
        return sobrenome;
    }

    int getID() const {
        return id;
    }
};

int Clientes::proximoID = 1; // Inicialize a variável estática proximoID

int main() {
    Clientes cliente1("João", "Souza");
    Clientes cliente2("Sandro", "Medeiros");

    Dependente Dependente1("Mauricio", "123456789", &cliente1, 1); // Atribua manualmente os IDs dos dependentes
    Dependente Dependente2("Marcos", "987654321", &cliente1, 1);
    Dependente Dependente3("Daniel", "111222333", &cliente2, 2);
    Dependente Dependente4("Thiago", "444555666", &cliente2, 42);

    cliente1.novoDependente(Dependente1);
    cliente1.novoDependente(Dependente2);
    cliente2.novoDependente(Dependente3);
    cliente2.novoDependente(Dependente4);

    // Você pode acessar as informações assim:
    cout << "Cliente Id " << cliente1.getID() << ", " << cliente1.getNome() << " " << cliente1.getSobrenome() << endl;
    cout << "Dependentes de " << cliente1.getNome() << ":" << endl;
    for (const Dependente& Dependente : cliente1.Dependentes) {
        cout << "Id " << Dependente.getID() << ", " << Dependente.getNome() << " CPF: " << Dependente.getCPF() << endl;
    }

    cout << endl;
    cout << "<*******************************>\n\n";

    cout << "Cliente Id " << cliente2.getID() << ", " << cliente2.getNome() << " " << cliente2.getSobrenome() << endl;
    cout << "Dependentes de " << cliente2.getNome() << ":" << endl;
    for (const Dependente& Dependente : cliente2.Dependentes) {
        cout << "Id " << Dependente.getID() << ", " << Dependente.getNome() << " CPF: " << Dependente.getCPF() << endl;
    }

    return 0;
}
