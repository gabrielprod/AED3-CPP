/* SEM RECURSIVDADE 

#include<iostream>

using namespace std;

void cont(int n){
	
	for(int i=0;i<n;i++){
		cout << i+1 << endl;
	}
}




int main(){
	
	cont(15);
	
	return 0;
}
*/

// COM RECURSIVIDADE

#include<iostream>

using namespace std;

void contador(int n,int cont){
	cout << cont << endl;
	
	if(n > cont){
		
		contador(n,++cont);
	}
	
}

int main(){
	
	
	contador(30,1);
	
	return 0;
}





