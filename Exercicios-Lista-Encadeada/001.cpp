#include<iostream>

using namespace std;

struct celula{
	string nome;
	celula *prox;
};

void imprimircelula(celula *l){
	while(l!=NULL){
		cout << l->nome << endl;
		l = l->prox;
	}
}

void alocavalores(string nome,celula *li){
	
	
	
}


int main(){
	
	
	celula *lista;
	
	lista = NULL;
	
	celula *nova = new celula;
	
	nova->nome = "Eduardo";
	nova->prox = NULL;  
	
	lista = nova;
	
	nova = new celula;
	
	nova->nome = "DEDE";
	nova->prox = NULL;
	
	nova->prox = lista;
	lista = nova;
	
	nova = new celula;
	
	nova->nome = "alek";
	nova->prox = lista;
	
	lista =nova;
	
	imprimircelula(lista);
	
	
	
	
	
	return 0;
	
}


