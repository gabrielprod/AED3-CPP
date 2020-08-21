#include<iostream>

using namespace std;

void bubblesort(int vet[], int tam){
    int aux,flag,cont1=0,cont2=0;

    // Trocando os valores verificando se um é maior que outro 
    do{
        flag = 0;
        for(int i =0 ; i < tam-1 ; i++){
            if(vet[i] > vet[i+1]){
                cont2++;
                aux = vet[i];   
                vet[i] = vet[i+1];
                vet[i+1] = aux;
                flag = 1;
            }else{
                cont1++;
            }
        }
    }while(flag == 1);
    //imprime o valor ordenado
    cout << "O programa realizou "<< cont1 <<"comparacoes ! \n";
    cout << "O programa realizou "<< cont2<<"troca de valores !\n";

    for(int i = 0;i< tam; i++){
        cout << vet[i] << " ";
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
	
	bubblesort(vet,t);

    return 0;
}