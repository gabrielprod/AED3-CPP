#include<iostream>

using namespace std;

struct celula{
	string nome,sobrenome,posicao;
	int idade;
	float altura;
	celula *prox;
};

celula *inseririnicio(celula *l,string n,string sobren,string posit,int idad,float alt){
	
	celula *jogador = new celula;
	jogador->nome = n;
	jogador->sobrenome = sobren;
	jogador->posicao = posit;
	jogador->idade = idad;
	jogador->altura = alt;
	jogador->prox = l;
	
	return jogador;
	
}

void imprimir(celula *li){
	if(li == NULL){
		cout << "Lista Vazia ! ";
	}else{
		while(li != NULL){
			cout << li->nome << " " << li->sobrenome << " - " << li->posicao << " - "<< li->idade << " - "<< li->altura << endl;
			li = li->prox;
		}
		
	}
}

void atacantes(celula *li){
	if(li == NULL){
		cout << "Lista Vazia !";
	}else{
		while(li!=NULL){
			string mvelho = " ";
			if(li->posicao == "Atacante"){
				cout << li->nome << " "<< li->sobrenome << endl;
			}
			li = li->prox;
		}
	}
}

void acima32(celula *l){
	if(l == NULL){
		cout << "Lista Vazia ! ";
	}else{
		while(l != NULL){
			if(l->idade > 32){
				cout << l->nome << " "<<l->sobrenome <<endl;
			}
			l = l->prox;
		}
	}
}

void maiorid(celula *li){
	if(li == NULL){
		cout << "Lista Vazia !";
	}else{
		while(li != NULL){
			int mai = 0;
			if(li->idade > mai){
				mai = li->idade;
				
			}
			cout << mai<< endl;
			li = li->prox;
		}
	}
}


int main(){
	
	celula *lista = NULL;
	cout << "Lista : " << endl;
	lista = inseririnicio(lista,"Cristiano","Ronaldo","Atacante",35,1.87);
	lista = inseririnicio(lista,"Roberto","Carlos","Lateral.E",42,1.78);
	lista = inseririnicio(lista,"Gabriel","Barbosa","Atacante",23,1.80);
	lista = inseririnicio(lista,"Rodrigo","Pimpao","Atacante",27,1.77);
	lista = inseririnicio(lista,"Sergio","Ramos","Zagueiro",34,1.83);
	lista = inseririnicio(lista,"Gerard","Pique","Zagueiro",35,1.86);
	imprimir(lista);
	cout << endl;
	
	cout << "==================================="<<endl;
	cout << "Atacantes "<<endl;
	cout << "==================================="<<endl;
	atacantes(lista);
	cout << "==================================="<<endl;
	cout << endl;
	cout << "==================================="<<endl;
	cout << "Acima dos 32 anos : "<<endl;
	cout << "==================================="<<endl;
	acima32(lista);
	cout << "==================================="<<endl;
	cout << "Maior Idade "<<endl;
	cout << "==================================="<<endl;
	maiorid(lista);
	
	return 0;
}
