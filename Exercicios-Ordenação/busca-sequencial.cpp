#include <iostream>

using namespace std;


int pesquisa_seq(int vet[],int tam,int x){
    
    for(int i = 0;i < tam; i++){
        if(vet[i] == x){
            return i;
        }
    }

}

int main(){

    int t;

    cout << "Digite o tamanho do vetor : ";
    cin >> t;

    int vet[t];

    for(int i = 0;i<t;i++){
        cout << "Digite o valor "<< i + 1 << " : ";
        cin >> vet[i];

    }

    int x;

    cout << "Digite um valor a ser encontrado : ";
    cin >> x;
    
    int p = pesquisa_seq(vet,t,x);

    if(p >= 0 ){
        cout << "O valor esta na posicao : "<< p+1;
    }else{
        cout << "Valor nao encontrado !";
    }
    return 0;
}