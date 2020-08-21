#include<iostream>

using namespace std;

struct jogador{
    string nome,posicao,elo,equipe;
    int idade;
    float salario;
    jogador *prox;
};

jogador *inseririnicio(jogador *lista,string n,int idad,float salat,string pos,string elo,string time){
    jogador *nova = new jogador;
    nova->nome = n;
    nova->idade = idad;
    nova->salario = salat;
    nova->posicao = pos;
    nova->elo = elo;
    nova->equipe = time;
    nova->prox = lista;

    return nova;
    
}

void top(jogador *lis){
    if(lis == NULL){
        cout << "Lista Vazia!";
    }else{
        while(lis!=NULL){
            if(lis->posicao == "Topo"){
                cout << lis->nome << " "<<lis->idade <<endl;
            }
            lis = lis->prox;
        }
    }

}

void imprimir(jogador *li){
    if(li == NULL){
        cout << "Lista Vazia ! ";
    }else{
        while(li != NULL){
            cout << li->nome << " " << li->idade << " " << li->salario << " "<< li->posicao << " " << li->elo <<" " << li->equipe << endl;

            li = li->prox;
        }
    }
}



int main(){

    jogador *lista = NULL;

    lista = inseririnicio(lista,"Gabriel",34,10000,"Topo","Prata3","CNB");
    lista = inseririnicio(lista,"Ze",53,4000,"Atirador","Platina1","INTZ");
    lista = inseririnicio(lista,"Eduardo",18,11000,"jungler","Bronze1","Pain");
    lista = inseririnicio(lista,"Yoda",34,100430,"Topo","Prata3","CNB");

    cout << "======================================";
    cout << "Lista : "<<endl;
    imprimir(lista);
    cout << "======================================"<<endl;
    cout << "Lista do Top-Laners : "<<endl;
    top(lista);
    cout << "======================================";
    return 0;
}