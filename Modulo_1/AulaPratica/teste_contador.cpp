#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

class MInhaClassse {
    private:
    static int contador;

    public:
    MInhaClassse() {
        contador++;
    }

    static int getContador() {
        return contador;
    }
};

int MInhaClassse::contador = 0;

int main() {

    MInhaClassse objeto1;
    MInhaClassse objeto2;

    cout << "Número de instancias" << MInhaClassse::getContador() << endl;
    
    return 0;
}