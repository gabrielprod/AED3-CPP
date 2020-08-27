#include <iostream>
#include <list>

using namespace std;

class jogador{
	private:
		string nome, posicao;
		int numero;
	public:
		jogador(string n, string p, int nu){
			nome = n;
			posicao = p;
			numero = nu;
		}
		void imprimir(){
			cout << nome << " - " << posicao << " - " << numero << endl;
		}

		bool operator == (const jogador& p) const {
				return nome == p.nome && posicao == p.posicao;
		}
};

void imprimir(list<jogador> l){
	for(auto item : l){
		item.imprimir();
	}
	cout << endl;
}

void imprimirStrings(list<string> l){
	for(auto item : l){
		cout << item << endl;
	}
	cout << endl;
}

int main() {
	list<jogador> time1;

  jogador j1("Messi", "Meia", 10);
	jogador j2("Messi", "Atacante", 11);


	time1.push_front(j1);
	time1.push_back(j2);
	jogador j3("Cristiano", "Atacante", 9);
	time1.push_back(j3);
	jogador j4("Mailson", "Zagueiro", 5);
	time1.push_back(j4);

	imprimir(time1);
	//imprimir(time1);
	//imprimir(time1);


	time1.remove(j2);
	imprimir(time1);

  if(j1==j4){
    cout << "iguais"<<endl;
  }else{
    cout << "diferente";
  }

    return 0;

	



}
