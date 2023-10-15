#include <iostream>
#include <vector>
#include <fstream>
#include <ctime>

using namespace std;

class Usuario;
class Tweet;

class Tweet {
public:
    Usuario* autor;
    string conteudo;
    time_t data_criacao;

    Tweet(Usuario* autor, const string& conteudo) {
        this->autor = autor;
        this->conteudo = conteudo;
        this->data_criacao = time(0);
    }
};

class Usuario {
public:
    string nome_usuario;
    string nome;
    vector<Usuario*> seguidores;
    vector<Usuario*> seguindo;
    vector<Tweet> tweets;

    Usuario(const string& nome_usuario, const string& nome) {
        this->nome_usuario = nome_usuario;
        this->nome = nome;
    }

    void postar_tweet(const string& conteudo) {
        Tweet tweet(this, conteudo);
        tweets.push_back(tweet);
    }

    void seguir(Usuario* usuario) {
        seguindo.push_back(usuario);
        usuario->seguidores.push_back(this);
    }

    vector<Tweet> receber_feed() {
        vector<Tweet> feed;
        for (Usuario* usuario : seguindo) {
            for (const Tweet& tweet : usuario->tweets) {
                feed.push_back(tweet);
            }
        }
        return feed;
    }
};

class RedeSocial {
public:
    vector<Usuario> usuarios;
    vector<Tweet> tweets;

    void registrar_usuario(const string& nome_usuario, const string& nome) {
        Usuario usuario(nome_usuario, nome);
        usuarios.push_back(usuario);
    }

    Usuario* buscar_usuario(const string& nome_usuario) {
        for (Usuario& usuario : usuarios) {
            if (usuario.nome_usuario == nome_usuario) {
                return &usuario;
            }
        }
        return nullptr;
    }

    vector<Usuario> listar_usuarios() {
        return usuarios;
    }

    vector<Tweet> listar_tweets() {
        return tweets;
    }

    void salvar_dados_em_arquivo(const string& nome_arquivo) {
        ofstream arquivo(nome_arquivo);

        // Salvar informações de usuários
        for (const Usuario& usuario : usuarios) {
            arquivo << "Usuario: " << usuario.nome_usuario << " (" << usuario.nome << ")\n";
            for (const Tweet& tweet : usuario.tweets) {
                arquivo << "  Tweet por " << usuario.nome_usuario << ": " << tweet.conteudo << " em " << ctime(&tweet.data_criacao);
            }
        }

        arquivo.close();
    }
};

int main() {
    RedeSocial rede_social;

    while (true) {
        cout << "1. Cadastrar novo usuário\n2. Postar tweet\n3. Sair\nEscolha uma opção: ";
        int escolha;
        cin >> escolha;
        cin.ignore();  // Limpar o caractere de nova linha do buffer

        if (escolha == 1) {
            string nome_usuario, nome;
            cout << "Nome de usuário: ";
            getline(cin, nome_usuario);
            cout << "Nome real: ";
            getline(cin, nome);

            rede_social.registrar_usuario(nome_usuario, nome);
            cout << "Usuário cadastrado com sucesso!\n";
        } else if (escolha == 2) {
            string nome_usuario, tweet;
            cout << "Nome de usuário: ";
            getline(cin, nome_usuario);

            Usuario* usuario = rede_social.buscar_usuario(nome_usuario);
            if (usuario) {
                cout << "Digite o tweet: ";
                getline(cin, tweet);
                usuario->postar_tweet(tweet);
                cout << "Tweet postado com sucesso!\n";
            } else {
                cout << "Usuário não encontrado.\n";
            }
        } else if (escolha == 3) {
            break;
        } else {
            cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}
