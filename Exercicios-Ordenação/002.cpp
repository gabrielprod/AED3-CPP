#include<iostream>

using namespace std;

void BubbleSortDec(int vet[], int tam){
    int aux,flag;

    // Trocando os valores de posição, pós verificação de maior/menor.
    do{
        flag = 0;
        for(int i = 0; i<tam-1 ; i++){
            if(vet[i] < vet[i+1]){
                aux = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = aux;
                flag = 1;
            }
        }

    }while(flag==1);

    for(int i = 0; i < tam;i++){
        cout << vet[i] << " ";
    }
   
}

void Verifica(int vet[],int tam,int n){

    int f;
    
    for(int i = 0; i < tam; i++ ){
        if(vet[i] == n){
            f = 1;
                
            }
        }
    
    if (f == 1){
        cout << "O valor "<< n << " foi encontrado no vetor ! ";
    }else{
        cout << "O valor "<< n << " nao foi encontrado no vetor ! ";
    }

}





int main(){

    int t,nd;

    cout << "=============================\n";
    cout << "Digite o tamando do vetor :";
    cin >> t;
    cout << "\n=============================\n";

    int vet[t];

    for(int i = 0;i<t;i++){
        cout << "Digite o numero "<< i+1 << " : ";
        cin >> vet[i];
    }

    BubbleSortDec(vet,t);

    cout << "\n=============================\n";
    cout << "Digite um numero a ser encontrado no vetor : ";
    cin >> nd;
    cout << "\n=============================\n";

    Verifica(vet,t,nd);

    return 0;
}