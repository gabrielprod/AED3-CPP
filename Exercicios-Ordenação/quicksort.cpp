#include<iostream>


using namespace std;

void Quicksort(int vet[], int inicio,int fim){
    int pivo,i=inicio,j=fim,meio,aux;

    meio = (int) ((i+j)/2);

    pivo = vet[meio];

    do{

        while(vet[i] < pivo){
            i += 1;
        }
        while (vet[j] > pivo){
            j -= 1;
        }
        
        if(i <= j){
            aux = vet[j];
            vet[i] = aux;
            vet[j] = aux;
            i += 1;
            j -= 1;
        }
            
        
        

    }while(j>i);
    if(inicio < j){
        Quicksort(vet,inicio,j);
    }

    if(i < fim){
        Quicksort(vet,i,fim);
    }

}


int main(){

    int t;

    cout << "Entre com o tamanho do vetor : ";
    cin >> t;
    int vet[t];
    for (int i = 0;i<t;i++){
        cout << "Digite o valor " << i + 1 << " : ";
        cin >> vet[i];
    }
    Quicksort(vet,0,t-1);
    for(int i =0 ; i < t ; i++){
        cout << vet [i]<< " ";
    }


    return 0;
}
