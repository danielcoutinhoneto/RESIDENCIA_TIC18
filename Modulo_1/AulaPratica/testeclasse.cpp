#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class Ponto {
	float x, y;
	public:
		
	Ponto() {
		
	}
	
	Ponto (float a, float b) {
		x = a;
		y = b;
	}
	
	float get_x() {
		return x;
	}
	
	float get_y() {
		return y;
	}

		
	void le_Ponto() {
		cout << "Digite as coordenadas do ponto: ";
		cin >> x >> y;
	}
	
	string escreve_ponto() {
		return to_string(x) + " , " + to_string(y);
	}
	
	float distancia(Ponto p1) {
		return sqrt( pow(x - p1.get_x(),2) + 
						pow (y - p1.get_y(),2)  );
	}
	
	bool operator==(Ponto p) {
		return p.get_x()==x && p.get_y()==y;
	}
	
	Ponto operator+(Ponto p) {
		Ponto p1(p.get_x()+x, p.get_y()+y);
		return p1;
	}
	
};

class Poligono {
	vector<Ponto> pontos;
	
	public:
	void le_pontos() {
		cout << "Criando um poligono!" << endl;
		char sn;
		do {
			Ponto p;
			p.le_Ponto();
			pontos.push_back(p);
			cout << "Deseja inserir mais pontos (s/n)?";
			cin >> sn;
		} while (sn!='n');
	}
	
	void lista_pontos() {
		cout << "As coordenadas digitadas foram" << endl;
		for (Ponto p: pontos)
			cout << "(" << p.escreve_ponto() << ") ";
	}
	
	float perimetro() {
		float per = 0;
		vector<Ponto>::iterator it2;
		Ponto p1;
		Ponto p2;
		for (auto it = pontos.begin(); 
					it != pontos.end()-1; it++) {
			it2 = it;
			advance(it2,1);
			p1 = *it;
			p2 = *it2;
			per += p1.distancia(p2);
		}
		//pegando distancia entre o primeiro e ultimo
		it2 = pontos.begin();
		p1 = *it2;
		per += p1.distancia(p2);
		return per;
	
        bool operator==(Ponto p)
        {
            return p.get_x()==x && p.get_y()==y; 
        }

        Ponto operator+(Ponto p) 
        {
            Ponto p1;
            p1.set_x(p.get_x()+x);
            p1.set_xyp.get_y()+y);
            return p1;
        }
    }
};
 
int main() {

    Poligono Poli1, Poli2;

    Poli1.le_pontos();
    Poli2 = Poli1;
    Poli1.lista_pontos();
    Poli2.lista_pontos();
    if(Poli1 == Poli2)
        cout << "Suave na nave";
    else
        cout << "Algo de errado de errado não tá certo";

    return 0;
	// Ponto p1;
	// p1.le_Ponto();
	// Ponto p2;
	// p2.le_Ponto();
	// if (p1==p2)
	// 	cout << "Os pontos sao iguais" << endl;
	// else
	// 	cout << "Os pontos sao diferentes" << endl;
	// Ponto p3 = p1 + p2;
	// cout << "(" << p1.escreve_ponto() << ") + ("
	// 		<< p2.escreve_ponto() << ") = (" 
	// 		<< p3.escreve_ponto() << ")";
}




