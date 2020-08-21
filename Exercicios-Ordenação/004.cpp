#include<iostream>

using namespace std;

int transfMatrizEmVet (int matriz[4][4], int vetor[16]) {
	
	int i=0,x, y;
	for (x=0; x<4; x++) {  
        for (y=0; y < 4; y++) {
            vetor[i] = matriz[x][y];
            i++; 
        }
    }
	return vetor[16];
}

int transfVetEmMatriz(int vetor[16], int matriz[4][4]) {
	int i=0,x, y;
	for (x=0; x<4; x++) {  
        for (y=0; y<4; y++) {
            matriz[x][y]=vetor[i];
            i++; 
        }
    }
	return matriz[4][4];
}


void BubbleSort(int vetor[16]){

    int aux, flag = 0;
	
	while (flag == 0) {
    flag = 1;
  		  for (int x=0;x<16-1;x++) { 
       if (vetor[x]>vetor[x+1]) {
          aux=vetor[x+1];
          vetor[x+1]=vetor[x];
          vetor[x]=aux;
          flag = 0;
       }
   }
}


}



int main(){

    int matriz[4][4], vetor[16];
    
    cout << "\n==================================\n\n";
    
    for(int l = 0; l < 4; l++){
        for(int c = 0; c < 4 ; c++){
            cout << "Digite o valor ["<<l + 1<<"]["<<c + 1<<"] : ";
            cin >> matriz[l][c];
        }
    }
    transfMatrizEmVet(matriz, vetor);
    BubbleSort(vetor);
    transfVetEmMatriz(vetor, matriz);
    cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n";
    cout << "Matriz Ordenada : \n\n";
     for(int l = 0; l < 4; l++){
        for(int c = 0; c < 4; c++){
            cout <<" [" << matriz[l][c] << "] " ;
        }
        cout << "\n";
    }

    
    cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n";
    
    
    
    


    return 0;
}