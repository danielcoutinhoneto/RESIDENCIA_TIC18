    #include <iostream>
    #include <string>
    #include <vector>
    #include <fstream>

    using namespace std;

    void limpaTela() {
        for (int i = 0; i < 20; i++)
            cout << endl;
    }

    class Usuario {
        string cpf;
        string nome;
        string endereco;
        string telefone;

    public:
        static Usuario leDados() {
            Usuario novoUsuario;
            cout << "Dados de um novo Usuário" << endl;
            cout << "Digite o CPF: \n";
            cin.ignore();
            getline(cin, novoUsuario.cpf);

            cout << "Digite o nome: " << endl;
            getline(cin, novoUsuario.nome);

            cout << "Digite o Endereço: " << endl;
            getline(cin, novoUsuario.endereco);

            cout << "Digite o Telefone: " << endl;
            getline(cin, novoUsuario.telefone);

            return novoUsuario;
        }

        void listaDados() {
            cout << "<-------- Lista dos Usuários -------->\n";
            cout << "Usuário: " << getNome() << endl;
            cout << "CPF: " << getCPF() << endl;
            cout << "Endereço: " << getEndereco() << endl;
            cout << "Telefone: " << getTelefone() << endl;
            cout << "<------------------------------------->\n\n";
        }

        void localizarUsuario(const string& arquivoUsuarios) {
            string cpfLocalizar;
            cout << "Digite o CPF do usuário a ser localizado: ";
            cin.ignore(); // Limpar o buffer de entrada
            getline(cin, cpfLocalizar);

            ifstream arquivo(arquivoUsuarios);
            if (!arquivo) {
                cout << "Erro ao abrir o arquivo de usuários." << endl;
                return;
            }

            bool encontrado = false;
            string linha;
            while (getline(arquivo, linha)) {
                if (linha.find("[INÍCIO USUÁRIO]") != string::npos) {
                    // Encontrou o início de um novo registro de usuário
                    // Agora leia o CPF e verifique se corresponde ao CPF procurado
                    getline(arquivo, linha); // Ler a linha do CPF
                    if (linha.find("CPF: " + cpfLocalizar) == 0) {
                        encontrado = true;
                        cout << "Usuário encontrado:" << endl;
                        cout << linha << endl; // Exibe a linha com os dados do usuário (CPF)

                        // Continue lendo as próximas linhas para obter o nome do usuário
                        while (getline(arquivo, linha)) {
                            if (linha.find("Nome: ") == 0) {
                                cout << linha << endl;
                                break; // Sai do loop quando o nome é encontrado
                            }
                        }

                        break;
                    }
                }
            }

            if (!encontrado) {
                cout << "Usuário com CPF " << cpfLocalizar << " não encontrado." << endl;
            }

            arquivo.close();
        }

        void alterarUsuario(const string& arquivoUsuarios) {
            string cpfAlterar;
            cout << "Digite o CPF do usuário a ser alterado: ";
            cin >> cpfAlterar;
            cin.ignore();

            ifstream arquivo(arquivoUsuarios);
            if (!arquivo) {
                cout << "Erro ao abrir o arquivo de usuários." << endl;
                return;
            }

              vector<Usuario> usuariosTemp; // Crie um vetor temporário para armazenar os usuários do arquivo

            // Leia os usuários do arquivo e armazene-os no vetor temporário
            string linha;
            while (getline(arquivo, linha)) {
                if (linha.find("CPF: " + cpfAlterar) == 0) {
                    // Encontrou o usuário com o CPF a ser alterado
                    Usuario usuario;
                    usuario.cpf = cpfAlterar;
                    cout << "Digite o novo endereço do usuário: ";
                    getline(cin, usuario.endereco);
                    cout << "Digite o novo telefone do usuário: ";
                    getline(cin, usuario.telefone);
                    cout << "Usuário alterado com sucesso!" << endl;
                    usuariosTemp.push_back(usuario); // Adicione o usuário alterado ao vetor temporário
                } else {
                    // Mantenha os outros usuários inalterados no vetor temporário
                    Usuario usuario;
                    getline(arquivo, usuario.cpf); // Leia o CPF
                    getline(arquivo, usuario.nome); // Leia o nome
                    getline(arquivo, usuario.endereco); // Leia o endereço
                    getline(arquivo, usuario.telefone); // Leia o telefone
                    usuariosTemp.push_back(usuario); // Adicione ao vetor temporário
                }
            }

            arquivo.close();

            // Abra o arquivo para escrita e sobrescreva todos os registros
            ofstream out(arquivoUsuarios);
            if (!out) {
                cout << "Erro ao abrir o arquivo de usuários." << endl;
                return;
            }

            for (const Usuario& usuario : usuariosTemp) {
                out << "CPF: " << usuario.cpf << endl;
                out << "Nome: " << usuario.nome << endl;
                out << "Endereço: " << usuario.endereco << endl;
                out << "Telefone: " << usuario.telefone << endl;
            }

            out.close();
        }

        // Getter functions to access private members
        string getCPF() const {
            return cpf;
        }

        string getNome() const {
            return nome;
        }

        string getEndereco() const {
            return endereco;
        }

        string getTelefone() const {
            return telefone;
        }
    };

    int main() {
        vector<Usuario> usuarios;
        limpaTela();

        int op;
        do {
            cout << "CADASTRO DE USUÁRIOS\n";
            cout << "=======================\n\n";
            cout << "1. Incluir Usuário\n";
            cout << "2. Listar Usuários\n";
            cout << "3. Localizar Usuários\n";
            cout << "4. Alterar Usuários\n";
            cout << "0. Sair\n\n";
            cout << "Digite sua opção: ";
            cin >> op;
            cin.ignore();

            if (op == 1) {
                Usuario novo = Usuario::leDados();
                usuarios.push_back(novo);

                ofstream outUsuarios;
                outUsuarios.open("usuarios.txt", ios_base::app);
                if (outUsuarios.is_open()) {
                    outUsuarios << "Nome: " << novo.getNome() << endl;
                    outUsuarios << "CPF: " << novo.getCPF() << endl;
                    outUsuarios << "Endereço: " << novo.getEndereco() << endl;
                    outUsuarios << "Telefone: " << novo.getTelefone() << endl;
                    outUsuarios.close();
                }
            }

            if (op == 2) {
                for (Usuario u : usuarios) {
                    u.listaDados();
                }
                ifstream inUsuarios("usuarios.txt"); // Abre o arquivo para leitura

                if (!inUsuarios) {
                    cout << "Erro ao abrir o arquivo de usuários." << endl;
                    return 1; // Encerra o programa com erro
                }

                string linha;
                while (getline(inUsuarios, linha)) {
                    cout << linha << endl; // Exibe cada linha do arquivo
                }

                inUsuarios.close(); // Fecha o arquivo
            }

            if (op == 3) {
                Usuario usuarioCad; // Crie um objeto temporário da classe Usuario
                usuarioCad.localizarUsuario("usuarios.txt"); // Chame a função localizarUsuario no objeto temporário
            }

            if (op == 4) {
                Usuario usuarioCad; // Crie um objeto temporário da classe Usuario
                usuarioCad.alterarUsuario("usuarios.txt"); // Chame a função localizarUsuario no objeto temporário
            }

        } while (op != 0);

        return 0;
    }
