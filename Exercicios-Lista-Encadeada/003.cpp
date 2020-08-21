#include<iostream>

using namespace std;

struct celula{
	string nome,sobrenome;
	int idad;
	char sex;
	celula *prox;
};

celula *inseririnicio(celula *l,string n,string sobren,char sex,int idade){
	celula *nova = new celula;
	nova->nome = n;
	nova->sobrenome = sobren;
	nova->sex = sex;
	nova->idad = idade;
	nova->prox = l;
	
	return nova;
}

void imprimir(celula *l){
	if(l == NULL){
		cout << "Lista Vazia!" << endl;
	}else{
		while(l != NULL){
			cout <<	l->nome<< "-"<< l->sobrenome << "-"<< l->sex << "-"<< l->idad << endl;
			l = l->prox;
		}
	}
	
}

void imprimiracima40(celula *l){
	if(l == NULL){
		cout << "Lista Vazia !";
	}else{
		while(l != NULL){
			if(l->idad > 40){	
				cout <<l->nome << " " <<l->sobrenome << endl;
			}
			l=l->prox;
		}
	}
}


void mulheres(celula *li){
	if(li == NULL){
		cout << "Lista Vazia !";
	}else{
		while(li != NULL){
			if(li->sex == 'F'){
				cout <<li->nome << " "<<li->sobrenome << endl;
			}
			li = li->prox;
		}
	}
}

void homenab30(celula *l){
	if(l == NULL){
		cout << "Lista Vazia !";
	}else{
		while(l!=NULL){
			if(l->sex == 'M' && l->idad <30){
				cout << l->nome << " " << l->sobrenome << endl;
			}
			l = l->prox;
		}
	}
}


int main(){
	
	
	celula *lista1 = NULL;
	
	lista1 = inseririnicio(lista1,"Gabriel","Rodrigues",'M',18);
	lista1 = inseririnicio(lista1,"Jose","Ademir",'M',63);
	lista1 = inseririnicio(lista1,"Gustavo","Mioto",'M',23);
	lista1 = inseririnicio(lista1,"Bianca","Puntel",'F',14);
	lista1 = inseririnicio(lista1,"Karine","Rodrigues",'F',25);
	
	cout << "Lista : "<<endl;
	imprimir(lista1);
	cout << endl;
	cout << "Acima de 40 : "<<endl;
	imprimiracima40(lista1);
	cout << endl;
	cout << "Mulheres : "<<endl;
	mulheres(lista1);
	cout << endl;
	cout << "Homens abaixo de 30 anos : "<< endl;
	homenab30(lista1);
	
	
	
	
	
	
	return 0;
}

