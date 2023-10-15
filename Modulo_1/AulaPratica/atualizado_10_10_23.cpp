#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

class Usuario {
public:
    string nome;
    string cpf;
    string endereco;
    string telefone;

    Usuario(const string& _nome, const string& _cpf, const string& _endereco, const string& _telefone)
        : nome(_nome), cpf(_cpf), endereco(_endereco), telefone(_telefone) {}
};

class Cliente : public Usuario {
public:
    string habilitacao;

    Cliente(const string& _nome, const string& _cpf, const string& _endereco, const string& _telefone, const string& _habilitacao)
        : Usuario(_nome, _cpf, _endereco, _telefone), habilitacao(_habilitacao) {}
};

class CadastroUsuarios {
private:
    vector<Usuario> usuarios;
    string arquivoNome; // Nome do arquivo para persistência

public:
    CadastroUsuarios(const string& nomeArquivo) : arquivoNome(nomeArquivo) {
        carregarUsuarios(); // Carrega os usuários do arquivo no início
    }

    ~CadastroUsuarios() {
        salvarUsuarios(); // Salva os usuários no arquivo ao encerrar
    }

    void incluirUsuario() {
        string nome, cpf, endereco, telefone;
        cout << "Digite o nome do Usuario: ";
        cin.ignore();
        getline(cin, nome);

        cout << "Digite o CPF do Usuario: ";
        getline(cin, cpf);

        cout << "Digite a Endereço: ";
        getline(cin, endereco);

        cout << "Digite o número da telefone: ";
        getline(cin, telefone);

        Usuario novoUsuario(nome, cpf, endereco, telefone);
        usuarios.push_back(novoUsuario);
        cout << "Usuario incluído com sucesso!" << endl;
    }

    void excluirUsuario() {
        string cpfExcluir;
        cout << "Digite o CPF do Usuario a ser excluído: ";
        cin >> cpfExcluir;

        for (auto it = usuarios.begin(); it != usuarios.end(); ++it) {
            if (it->cpf == cpfExcluir) {
                usuarios.erase(it);
                cout << "Usuario excluído com sucesso!" << endl;
                return;
            }
        }
        cout << "Usuario não encontrado." << endl;
    }

    void alterarUsuario() {
        string cpfAlterar;
        cout << "Digite o CPF do Usuario a ser alterado: ";
        cin >> cpfAlterar;

        for (auto& usuario : usuarios) {
            if (usuario.cpf == cpfAlterar) {
                cout << "Digite o novo nome do Usuario: ";
                cin.ignore();
                getline(cin, usuario.nome);

                cout << "Digite a nova Endereço: ";
                getline(cin, usuario.endereco);

                cout << "Digite o novo número da telefone: ";
                getline(cin, usuario.telefone);

                cout << "Usuario alterado com sucesso!" << endl;
                cout << endl;
                return;
            }
        }
        cout << "Usuario não encontrado." << endl;
    }

    void listarUsuarios() {
        if (usuarios.empty()) {
            cout << "Nenhum Usuario cadastrado." << endl;
        } else {
            cout << "Lista de Usuarios:\n" << endl;
            for (const auto& usuario : usuarios) {
                cout << "------ Dados do Usuario ------" << endl;
                cout << "Nome: " << usuario.nome << endl;
                cout << "N° do CPF: " << usuario.cpf << endl;
                cout << "Endereço: " << usuario.endereco << endl;
                cout << "N° do telefone: " << usuario.telefone << endl;
                cout << "------------------------------" << endl;
                cout << endl;
            }
        }
    }

    void localizarUsuario() {
        string cpfLocalizar;
        cout << "Digite o CPF do Usuario a ser localizado: ";
        cin >> cpfLocalizar;

        for (const auto& usuario : usuarios) {
            if (usuario.cpf == cpfLocalizar) {
                cout << "------ Dados do Usuario ------" << endl;
                cout << "Nome: " << usuario.nome << endl;
                cout << "N° do CPF: " << usuario.cpf << endl;
                cout << "Endereço: " << usuario.endereco << endl;
                cout << "N° do telefone: " << usuario.telefone << endl;
                cout << "-----------------------------" << endl;
                cout << endl;
                return;
            }
        }
        cout << "Usuario não encontrado." << endl;
        cout << endl;
    }

    void carregarUsuarios() {
        ifstream arquivo(arquivoNome);
        if (arquivo.is_open()) {
            string linha;
            while (getline(arquivo, linha)) {
                stringstream ss(linha);
                string nome, cpf, endereco, telefone;
                getline(ss, nome, ','); // Supondo que as informações sejam separadas por vírgula
                getline(ss, cpf, ',');
                getline(ss, endereco, ',');
                getline(ss, telefone, ',');
                Usuario novoUsuario(nome, cpf, endereco, telefone);
                usuarios.push_back(novoUsuario);
            }
            arquivo.close();
        }
    }

    void salvarUsuarios() {
        ofstream arquivo(arquivoNome);
        if (arquivo.is_open()) {
            for (const auto& usuario : usuarios) {
                arquivo << usuario.nome << ',' << usuario.cpf << ',' << usuario.endereco << ',' << usuario.telefone << '\n';
            }
            arquivo.close();
        }
    }
};

int main() {
    CadastroUsuarios cadastro("usuarios.txt"); // Nome do arquivo de persistência

    int opcao;
    do {
        cout << "Gestão Cadastro de Usuarios:\n";
        cout << "Menu de Opções:\n" << endl;
        cout << "1. Incluir" << endl; 
        cout << "2. Excluir" << endl;
        cout << "3. Alterar" << endl;
        cout << "4. Listar" << endl;
        cout << "5. Localizar" << endl;
        cout << "0. Sair" << endl;
        cout << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;
        cout << endl;

        switch (opcao) {
            case 1:
                cadastro.incluirUsuario();
                break;
            case 2:
                cadastro.excluirUsuario();
                break;
            case 3:
                cadastro.alterarUsuario();
                break;
            case 4:
                cadastro.listarUsuarios();
                break;
            case 5:
                cadastro.localizarUsuario();
                break;
            case 0:
                cout << "Saindo do programa." << endl;
                break;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
                break;
        }

    } while (opcao != 0);

    return 0;
}
