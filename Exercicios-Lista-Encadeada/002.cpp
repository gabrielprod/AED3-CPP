#include<iostream>

using namespace std;

string function(string nome,int n){
	string temp = " ";
	for(int i = 0;i<n;i++){
		temp = temp + nome + " ";
	}
	return temp;
}

int main(){
	
	string nome = "ZULEICA";
	
	int x = 100;
	
	cout << function(nome,x);
	
	
}
