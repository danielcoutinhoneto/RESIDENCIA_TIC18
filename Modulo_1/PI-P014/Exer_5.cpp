#include <iostream>
#include <string>
#include <vector>
#include <limits>

using namespace std;

struct Sorveteria {
    string nome;
    string endereco;
    vector<pair<string, double >> saboresDisponiveis;
    vector<int> estoqueSabores;

    void exibirInformacoes() {
        cout << "Nome da Sorveteria: " << nome << endl;
        cout << "Endereço: " << endereco << endl;
        cout << "Sabores Disponíveis:" << endl;
        for (size_t i = 0; i < saboresDisponiveis.size(); ++i) {
            cout << "- " << saboresDisponiveis[i].first << ": R$" << saboresDisponiveis[i].second;
            cout << " (Estoque: " << estoqueSabores[i] << " unidades)" << endl;
        }
    }

    double calcularPrecoTotal(const string& sabor, int quantidade) {
        for (size_t i = 0; i < saboresDisponiveis.size(); ++i) {
            if (saboresDisponiveis[i].first == sabor) {
                if (quantidade <= estoqueSabores[i]) {
                    estoqueSabores[i] -= quantidade;
                    return saboresDisponiveis[i].second * quantidade;
                } else {
                    return 0.0; 
                }
            }
        }
        return 0.0; 
    }
};

int main() {
    Sorveteria sorveteria1;

    cout << "Bem-vindo à Sorveteria!" << endl;

    cout << "Digite o nome da sorveteria: ";
    getline(cin, sorveteria1.nome);

    cout << "Digite o endereço da sorveteria: ";
    getline(std::cin, sorveteria1.endereco);

    sorveteria1.saboresDisponiveis = {
        {"Morango", 5.0},
        {"Chocolate", 4.5},
        {"Baunilha", 4.0},
        {"Creme", 4.0}
    };

    sorveteria1.estoqueSabores = {10, 10, 10, 10};

    char continuarComprando;
    double totalCompra = 0.0;

    do {
        sorveteria1.exibirInformacoes();

        string saborEscolhido;
        cout << "Escolha um sabor: ";
        getline(std::cin, saborEscolhido);

        int quantidadeComprada;
        cout << "Quantos sorvetes de " << saborEscolhido << " você deseja comprar? ";
        cin >> quantidadeComprada;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        double precoTotal = sorveteria1.calcularPrecoTotal(saborEscolhido, quantidadeComprada);

        if (precoTotal > 0.0) {
            cout << "Preço Total para " << quantidadeComprada << " sorvetes de " << saborEscolhido << ": R$" << precoTotal << endl;
            totalCompra += precoTotal;
        } else if (precoTotal == 0.0) {
            cout << "Sabor não encontrado ou não há estoque suficiente." << endl;
        }

        cout << "Deseja continuar comprando? (S/N): ";
        cin >> continuarComprando;

        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    } while (continuarComprando == 'S' || continuarComprando == 's');

    cout << "Total da Compra: R$" << totalCompra << endl;

    return 0;
}
