#include<iostream>

using namespace std;

void bobosort(int vet[],int tam){
    int aux,menor;
	
	for(int i = 0; i < tam ;i++){
		menor = i ;
		for(int j = i+1;j<tam;j++){
			if(vet[j] < vet[menor]){
				menor = j;
			}
			
			
		}
		if(i != menor){
			aux = vet[i];
			vet[i] = vet[menor];
			vet[menor] = aux;
		}	
	}
	
	for (int i = 0;i<tam;i++){
		cout << vet[i] << " ";
	}
	
}

int pesq_bin(int vet[],int t,int x){
    int meio = t/2;

    for(int i = 0;i < t; i++){
		 if(vet[i] == x){
            return i;
		}else {
			cout << "Valor nao encontrado !";
		}	
	}
}

int main(){

    int t;
	
	cout << "Digite o tamanho do vetor : ";
	cin >> t;
	cout << "=========================================\n";
	int vet[t];
	
	for (int i = 0; i<t ;i++){
		cout << "Digite o valor "<< i << " : "; 
		cin >> vet[i];
	}	
	
	bobosort(vet,t);

    int y;
	cout << "\n=========================================\n";
    cout << "Digite um valor a ser encontrado : ";
    cin >> y;
	cout << "=========================================\n";

	cout << "\n=========================================\n";
 	cout<<" O valor foi encontrado na posicao " << pesq_bin(vet,t,y);
	cout << "\n=========================================\n";

    return 0;
}