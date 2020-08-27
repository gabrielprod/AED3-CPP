#include<iostream>
#include<list>

using namespace std;

class Jogador{
	private:
		string nome, posicao;
		int numero;
	public:
		Jogador(string nm,string p,int num){
			nome = nm;
			posicao=p;
			numero = num;
		}
		
		void imprimir(){
			cout << nome << " - " << posicao << " - " << numero << endl;
		}
};

int main(){

	list<Jogador> time1;
	
	Jogador j1("Messi","Zagueiro",3);
	Jogador j2("Mauricin","Atacante",11);
	Jogador j3("Gabriel","Centroavante",9);
	time1.push_front(j1);
	time1.push_back(j2);
	time1.push_back(j3);
	
	for(auto item: time1){
		item.imprimir();
	}
	
	//sem forEach
	/*for(list<Jogador>::iterator i = time1.begin(); i!= time1.end();i++){
		i->imprimir();
	}*/
		
	return 0;
}
