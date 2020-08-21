#include<iostream>

using namespace std;

class celula{
	private:
		string name;
		celula *next;
	public:
		
		celula(string nm){
			name = nm;
		}
		
		void setName(string n){
			name = n;
		}
		
		string getName(){
			return name;
		}
		 
		void setNext(celula *n){
			next = n;
		}
		
		celula *getNext(){
			return next;
		}
		
};

class lista{
	private:
		celula *start;
	public:
		
		lista(){
			start = NULL;
		}
		
		void setDatainStart(string n){
			celula *nova = new celula(n);
			start = nova;
		}
		
		celula *getDatainStart(){
			return start;
		}
		
		void showAllDate(){
			if(start == NULL){
				cout << "Empty List" << endl;
			}else{
				celula *aux = start;
				while(aux != NULL){
					cout << aux->getName() << endl;
					aux=aux->getNext();
				}
			}
		}
		
		
		
	
};







int main(){
	
	lista alunos;

	alunos->showAllDate();

	return 0;
}
