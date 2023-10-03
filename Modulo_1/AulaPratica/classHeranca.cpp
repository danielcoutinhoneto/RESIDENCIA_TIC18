#include <iostream>
#include <string>

using namespace std;

// Definindo a classe Animal
class Animal {
    public:

    string nome;
    int idade;
    string fazerSom();
};

// Definindo a classe Cachorro, que herda de Animal
class Cachorro:public Animal {
    public:
     string latido = "au au";
        // Sobrescrevendo o método fazerSom para Cachorro
        void fazerSom() {
            cout << " O cachorro faz " << latido << "..." << endl;
        }
};

int main() {
   
   Animal animal;
   Cachorro cachorro;


   cachorro.fazerSom();
   return 0;



}
