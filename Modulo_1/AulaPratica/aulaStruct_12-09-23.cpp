#include <iostream>
#include <vector>

using namespace std;

struct cliente {

    string nome;
    string cpf;
};

void menu() {

    cout << "Qual opção deseja realizar? \n";
    cout << "___________________________ \n";
    cout << "Qual opção deseja realizar?\n";
    cout << "1. Cadastrar\n";
    cout << "2. Excluir cadastro\n";
    cout << "3. Listar clientes\n";
    cout << "4. Sair\n";
}

void lerCliente(cliente *novo_cliente) {
    cout << "Digite seu nome: " << endl;
    cin >> novo_cliente->nome;

    cout << "Digite seu CPF: " << endl;
    cin >> novo_cliente->cpf;

}

void imprimirCliente(cliente pes_cliente){

    cout <<"------ Dados do Cliente ------" << endl;
    cout << "Nome: " << pes_cliente.nome << endl;
    cout << "Número do CPF: " << pes_cliente.cpf << endl;
    cout <<"------------------------------" << endl;
}

int main() {

    cliente cli;
    vector<cliente> clientes;

    menu();
    int op;
    cin >> op;

    while (op != 4) {
        switch (op) {
            case 1:
                lerCliente(&cli);
                clientes.push_back(cli); // Add the client to the vector
                break;
            case 2:
                // Implement code to delete a client (if needed)
                cout << "Excluir cadastro\n";
                break;
            case 3:
                cout << "Listagem de Clientes:\n\n";
                for (const cliente &c : clientes) {
                    imprimirCliente(c); // Print all clients in the vector
                }
                break;
            default:
                cout << "Entrada inválida\n";
                break;
        }

        menu();
        cin >> op;
    }

    cout << "Encerrando..." << endl;
    return 0;
}