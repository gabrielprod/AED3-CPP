/* SEM RECURIVIDADE

#include<iostream>

using namespace std;

void bin(int dec){
	
	int x;

	stringstream aux;
	string saida = ""; 
	
	while(dec != 0){
		x = dec % 2;
		aux << x;
		dec = dec / 2; 
	}
	saida = aux.str();
	
	for(int i = saida.length();i>=0;i--){
		cout << saida[i];
	}
	
}


int main(){
	
	int dec;
	
	cout << "Digite um número em decimal : ";
	cin >> dec;
	bin(dec); 
	
	return 0;
}
*/
#include<iostream>
#include<sstream>

using namespace std;

void bin(int dec){
	int x;
	stringstream aux;
	
	if(dec == 0){
		cout << "";
		
	}else{
		x = dec % 2;
		aux << x;
		bin(dec/2);
		cout << aux.str();
	}
	
}

int main(){
	
	int dec;
	
	cout << "Digite um número em decimal : ";
	cin >> dec;
	bin(dec); 
	
	return 0;
}

