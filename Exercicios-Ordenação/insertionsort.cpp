#include<iostream>

using namespace std;

/*void insertionsort(int vet[],int tam){

	int aux,j=tam;
	while(j>0){
		if(vet[j] > vet[j-1]){
			aux = vet[j-1];
			vet[j-1] = vet[j];
			vet[j] = aux;
			j--;
		}else{
			break;
		}
	}
	for (int i = 0;i<tam;i++){
		cout << vet[i];
	}
	
}
*/

void insertionsortC(int vet[],int tam){
	int aux,j;
	for(int i = 0;i <tam;i++){
		j=1;
		while(j>0 and vet[j-1] > vet[j]){
			aux = vet[j-1];
			vet[j-1] = vet[j];
			vet[j] = aux;
			j--;
		}
	}
	for(int i =0;i<tam;i++){
		cout << vet[i];
	}
	
	
	
	
}

int main (){
	
	int t;
	cout << "Digite o tamanho do vetor : ";
	cin >> t;
	
	int vet[t];
	
	for (int i = 0; i<t ;i++){
		cin >> vet[i];
	}	
	
	insertionsortC(vet,t);
	return 0;
}
