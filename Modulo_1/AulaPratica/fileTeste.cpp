#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class BancoDeDados {
public:
    static void salvarDados(const vector<string>& dados) {
        ofstream arquivo_saida("exemplo.txt");

        if (!arquivo_saida.is_open()) {
            cout << "Erro ao abrir o arquivo para escrita." << endl;
            return;
        }

        for (const string& linha : dados) {
            arquivo_saida << linha << endl;
        }

        arquivo_saida.close();
    }

    static vector<string> recuperarDados() {
        ifstream arquivo_entrada("exemplo.txt");
        vector<string> dados;

        if (!arquivo_entrada.is_open()) {
            cout << "Erro ao abrir o arquivo para leitura." << endl;
            return dados; // Retorna um vetor vazio em caso de erro
        }

        string linha;
        while (getline(arquivo_entrada, linha)) {
            dados.push_back(linha);
        }

        arquivo_entrada.close();
        return dados;
    }
};

int main() {
    // Exemplo de uso da classe BancoDeDados
    vector<string> dados_para_salvar = {"Linha 1", "Linha 2", "Linha 3"};
    
    // Salvar dados no arquivo
    BancoDeDados::salvarDados(dados_para_salvar);

    // Recuperar dados do arquivo
    vector<string> dados_recuperados = BancoDeDados::recuperarDados();

    // Imprimir os dados recuperados
    for (const string& linha : dados_recuperados) {
        cout << linha << endl;
    }

    return 0;
}
