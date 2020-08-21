#include<iostream>

using namespace std;

void BubbleSort(int vet[], int t){

    int aux,flag;

    do{
        flag = 0;

        for(int i = 0;i < t-1 ;i++){
            if(vet[i] > vet[i+1]){
                aux = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = aux;
                flag = 1;
            }
        }

    }while(flag == 1);


    for(int i=0;i<t;i++){
        cout << vet[i] << " ";
    }
}

int BuscaBin(int vet[],int tam,int valor){

    int i=0, j = tam;

    while(i<j){
       int meio = (i+j) /2;
       
       if(vet[meio] == valor){
         return meio;
        }else{
            if(valor > vet[meio]){
                 i = meio+1;
            }else{
                 j = meio-1;
          }
       }
   }
      return -1;

}

int main(){


    int t;
    
    cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
    cout << "Digite o tamanho do vetor : ";
    cin >> t;
    cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
    
    int vet[t];

    for(int i = 0;i<t;i++){

        cout << "Digite o valor "<<i+1<<" : ";
        cin >> vet[i];
    
    }
    cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";

    cout << "Vetor Ordenado : \n";
    BubbleSort(vet,t);

    cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";

    int x;
    cout << "Digite um valor que se encontre no vetor para mostrarmos o indice : ";
    cin >> x;

    cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";

    cout << "O indice do numero digitado = "<< BuscaBin(vet,t,x);

    cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";

    return 0;
}