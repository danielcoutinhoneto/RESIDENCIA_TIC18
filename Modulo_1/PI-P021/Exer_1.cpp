#include <iostream>
#include <vector>
#include <string>

using namespace std;

#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // Inclua a biblioteca <algorithm>

class Livro {
public:
    Livro(string titulo, string autor, int num_copias) : titulo(titulo), autor(autor), num_copias(num_copias), copias_disponiveis(num_copias) {
    }

    int getCopiasDisponiveis() const {
        return copias_disponiveis;
    }

    void emprestar() {
        if (copias_disponiveis > 0) {
            copias_disponiveis--;
        }
    }

    void devolver() {
        if (copias_disponiveis < num_copias) {
            copias_disponiveis++;
        }
    }

    string getTitulo() const {
        return titulo;
    }

private:
    string titulo;
    string autor;
    int num_copias;
    int copias_disponiveis;
};

class Usuario {
public:
    Usuario(string nome, string cpf, string endereco) : nome(nome), cpf(cpf), endereco(endereco) {
    }

    string getNome() const {
        return nome;
    }

    void emprestarLivro(Livro& livro) {
        if (livro.getCopiasDisponiveis() > 0) {
            livros_emprestados.push_back(livro.getTitulo());
            livro.emprestar();
        }
    }

    void devolverLivro(Livro& livro) {
        auto it = find(livros_emprestados.begin(), livros_emprestados.end(), livro.getTitulo());
        if (it != livros_emprestados.end()) {
            livros_emprestados.erase(it);
            livro.devolver();
        }
    }

    void listarLivrosEmprestados() const {
        cout << "Livros emprestados por " << nome << ": ";
        for (const string& livro : livros_emprestados) {
            cout << livro << " ";
        }
        cout << endl;
    }

private:
    string nome;
    string cpf;
    string endereco;
    vector<string> livros_emprestados;
};

int main() {
    // Criar alguns livros manualmente
    Livro livro1("Cortiço", "Aluísio Azevedo", 5);
    Livro livro2("O Quinze", "Rachel de Queiroz", 3);

    // Criar alguns usuários manualmente
    Usuario usuario1("Max Lil", "290-234-108", "Rua do Amil, N° 1");
    Usuario usuario2("Valeria Mares", "290-123-190", "Av. Linhares, N° 092");

    // Exemplo de empréstimo e devolução de livros
    usuario1.emprestarLivro(livro1);
    usuario1.emprestarLivro(livro2);
    usuario2.emprestarLivro(livro1);
    usuario1.listarLivrosEmprestados();
    usuario2.listarLivrosEmprestados();

    usuario1.devolverLivro(livro1);
    usuario2.devolverLivro(livro1);
    usuario1.listarLivrosEmprestados();
    usuario2.listarLivrosEmprestados();

    return 0;
}






// class Usuario {
// public:
//     string nome;
//     string cpf;
//     string endereco;

//     Usuario(const string& nome, const string& cpf, const string& endereco)
//         : nome(nome), cpf(cpf), endereco(endereco) {}
// };

// class CadastroUsuarios {
// private:
//     vector<Usuario> usuarios;

// public:
//     void incluirUsuario() {
//         string nome, cpf, endereco;
//         cout << "Digite o nome: ";
//         cin.ignore();
//         getline(cin, nome);

//         cout << "Digite o CPF: ";
//         getline(cin, cpf);

//         cout << "Digite o endereço: ";
//         getline(cin, endereco);

//         Usuario novoUsuario(nome, cpf, endereco);
//         usuarios.push_back(novoUsuario);
//         cout << "Usuário incluído com sucesso!" << endl;
//     }

//     void excluirUsuario() {
//         string cpfExcluir;
//         cout << "Digite o CPF do Usuário a ser excluído: ";
//         cin >> cpfExcluir;

//         for (auto it = usuarios.begin(); it != usuarios.end(); ++it) {
//             if (it->cpf == cpfExcluir) {
//                 usuarios.erase(it);
//                 cout << "Usuário excluído com sucesso!" << endl;
//                 return;
//             }
//         }
//         cout << "Usuário não encontrado." << endl;
//     }

//     void alterarUsuario() {
//         string cpfAlterar;
//         cout << "Digite o CPF do Usuário a ser alterado: ";
//         cin >> cpfAlterar;

//         for (auto& usuario : usuarios) {
//             if (usuario.cpf == cpfAlterar) {
//                 cout << "Digite o novo nome do Usuário: ";
//                 cin.ignore();
//                 getline(cin, usuario.nome);

//                 cout << "Digite o novo endereço: ";
//                 getline(cin, usuario.endereco);

//                 cout << "Usuário alterado com sucesso!" << endl;
//                 cout << endl;
//                 return;
//             }
//         }
//         cout << "Usuário não encontrado." << endl;
//     }

//     void listarUsuarios() {
//         if (usuarios.empty()) {
//             cout << "Nenhum Usuário cadastrado." << endl;
//         } else {
//             cout << "Lista de Usuários:\n" << endl;
//             for (const auto& usuario : usuarios) {
//                 cout << "------ Dados do Usuário ------" << endl;
//                 cout << "Nome: " << usuario.nome << endl;
//                 cout << "N° do CPF: " << usuario.cpf << endl;
//                 cout << "Endereço: " << usuario.endereco << endl;
//                 cout << "------------------------------" << endl;
//                 cout << endl;
//             }
//         }
//     }

//     void localizarUsuario() {
//         string cpfLocalizar;
//         cout << "Digite o CPF do Usuário a ser localizado: ";
//         cin >> cpfLocalizar;

//         for (const auto& usuario : usuarios) {
//             if (usuario.cpf == cpfLocalizar) {
//                 cout << "------ Dados do Usuário ------" << endl;
//                 cout << "Nome: " << usuario.nome << endl;
//                 cout << "N° do CPF: " << usuario.cpf << endl;
//                 cout << "Endereço: " << usuario.endereco << endl;
//                 cout << "-----------------------------" << endl;
//                 cout << endl;
//                 return;
//             }
//         }
//         cout << "Usuário não encontrado." << endl;
//         cout << endl;
//     }
// };

// class Livro {
// public:
//     string titulo;
//     string autor;
//     int numCopias;

//     Livro(const string& titulo, const string& autor, const int numCopias)
//         : titulo(titulo), autor(autor), numCopias(numCopias) {}
// };

// class CadastroLivros {
// private:
//     vector<Livro> Livros;

// public:
//     void incluirLivro() {
//         string titulo, autor;
//         int numCopias;
//         cout << "Digite o título do livro: ";
//         cin.ignore();
//         getline(cin, titulo);

//         cout << "Digite o autor: ";
//         getline(cin, autor);

//         cout << "Digite o número de cópias disponíveis: ";
//         cin >> numCopias;

//         Livro novoLivro(titulo, autor, numCopias);
//         Livros.push_back(novoLivro);
//         cout << "Livro cadastrado com sucesso!" << endl;
//     }

//     void listarLivros() {
//         if (Livros.empty()) {
//             cout << "Nenhum Livro cadastrado." << endl;
//         } else {
//             cout << "Lista de Livros:\n" << endl;
//             for (const auto& livro : Livros) {
//                 cout << "------ Dados do Livro ------" << endl;
//                 cout << "Título: " << livro.titulo << endl;
//                 cout << "Autor: " << livro.autor << endl;
//                 cout << "N° de cópias: " << livro.numCopias << endl;
//                 cout << "------------------------------" << endl;
//                 cout << endl;
//             }
//         }
//     }
// };

// int main() {
//     CadastroUsuarios cadastroUsuarios;
//     CadastroLivros cadastroLivros;

//     int opcao;
//     int subOpcao;

//     do {
//         cout << "Gestão de Biblioteca:\n";
//         cout << "Menu de Opções:\n" << endl;
//         cout << "1. Cadastro de Usuários" << endl;
//         cout << "2. Cadastro de Livros" << endl;
//         cout << "0. Sair" << endl;
//         cout << endl;
//         cout << "Escolha uma opção: ";
//         cin >> opcao;
//         cout << endl;

//         switch (opcao) {
//             case 1:
//                 do {
//                     cout << "Menu de Cadastro de Usuários:\n";
//                     cout << "1. Incluir Usuário" << endl;
//                     cout << "2. Excluir Usuário" << endl;
//                     cout << "3. Alterar Usuário" << endl;
//                     cout << "4. Listar Usuários" << endl;
//                     cout << "5. Localizar Usuário" << endl;
//                     cout << "0. Voltar" << endl;
//                     cout << "Escolha uma opção: ";
//                     cin >> subOpcao;
//                     cout << endl;

//                     switch (subOpcao) {
//                         case 1:
//                             cadastroUsuarios.incluirUsuario();
//                             break;
//                         case 2:
//                             cadastroUsuarios.excluirUsuario();
//                             break;
//                         case 3:
//                             cadastroUsuarios.alterarUsuario();
//                             break;
//                         case 4:
//                             cadastroUsuarios.listarUsuarios();
//                             break;
//                         case 5:
//                             cadastroUsuarios.localizarUsuario();
//                             break;
//                         case 0:
//                             cout << "Voltando ao menu anterior." << endl;
//                             break;
//                         default:
//                             cout << "Opção inválida. Tente novamente." << endl;
//                             break;
//                     }
//                 } while (subOpcao != 0);
//                 break;

//             case 2:
//                 do {
//                     cout << "Menu de Cadastro de Livros:\n";
//                     cout << "1. Incluir Livro" << endl;
//                     cout << "2. Listar Livros" << endl;
//                     cout << "0. Voltar" << endl;
//                     cout << "Escolha uma opção: ";
//                     cin >> subOpcao;
//                     cout << endl;

//                     switch (subOpcao) {
//                         case 1:
//                             cadastroLivros.incluirLivro();
//                             break;
//                         case 2:
//                             cadastroLivros.listarLivros();
//                             break;
//                         case 0:
//                             cout << "Voltando ao menu anterior." << endl;
//                             break;
//                         default:
//                             cout << "Opção inválida. Tente novamente." << endl;
//                             break;
//                     }
//                 } while (subOpcao != 0);
//                 break;
//             case 0:
//                 cout << "Saindo do programa." << endl;
//                 break;
//             default:
//                 cout << "Opção inválida. Tente novamente." << endl;
//                 break;
//         }

//     } while (opcao != 0);

//     return 0;
// }

