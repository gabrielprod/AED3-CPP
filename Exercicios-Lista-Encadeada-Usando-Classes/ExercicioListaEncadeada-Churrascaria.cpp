//Gabriel Pereira Rodrigues

#include <iostream>

using namespace std;

class celula
{
private:
	string nome;
	char sexo;
	int idade;
	bool bebe;
	celula *proxima;
public:
	celula()
	{
		proxima = NULL;
	}
	celula(string n)
	{
		nome = n;
	}
	
	celula(string nm,int idad,char sx,bool bb, celula *p){
		nome = nm;
		idade = idad;
		sexo = sx;
		bebe = bb;
		proxima = p;
	}
	
	void setNome(string n){
	
		nome = n;
	}
	
	string getNome(){
		return nome;
	}

	
	void setSexo(char s){
		sexo = s;
	}
	
	char getSexo(){
		return sexo;
	}
	
	void setIdade(int idad){
		idade = idad;
	}
	
	int getIdade(){
		return idade;	
	}
	
	void setBeber(bool tf){
		bebe = tf;
	}
	
	bool getBeber(){
		return bebe;	
	}

	void setProxima(celula * l){
		proxima = l;
	}
	
	celula * getProxima(){
		return proxima;
	}

};


class lista{
	
private:
	celula * inicio;

public:
	lista()
	{
		inicio = NULL;
	}
	lista(celula *i)
	{
		inicio = i;
	}
	~lista()
	{
		esvaziar();
		cout << "\nPassou no metodo destrutor";
	}
	celula * getInicio()
	{
		return inicio;
	}

	void setInicio(celula *i)
	{
		inicio = i;
	}

	void inserirInicio(string n,int idad,char sx,bool bb)
	{
		celula *nova = new celula(n,idad,sx,bb,inicio);
		inicio = nova;
	}

	void inserirFim(string n,int idad,char sx,bool bb)
	{
		celula *nova = new celula(n,idad,sx,bb, NULL);
	
		if(inicio == NULL)
		{
			inicio = nova;
		}
		else
		{
			celula *aux = inicio;
			while(aux->getProxima() != NULL)
			{
				aux = aux->getProxima();
			}
			aux->setProxima(nova);
		}
	}


	void imprimir()
	{
		if(inicio == NULL)
		{
			cout << "Lista vazia.\n";
		}
		else
		{
			celula *aux = inicio;
			while(aux != NULL)
			{
				cout << aux->getNome() << "-"<< aux->getIdade() << "-"<< aux->getSexo() << "-" <<aux->getBeber() << endl;

				aux = aux->getProxima();
			}
		}
	}
	void esvaziar()
	{
		celula *aux = inicio;
		while(aux != NULL)
		{
			inicio = inicio->getProxima();
			delete aux;
			aux = inicio;
		}
		cout << "\nLista esvaziada com sucesso.";
	}
};

int main(){
	cout << "=-=-=-=-=-=-=-=-=-=-=CHURRASCARIA=-=-=-=-=-=-=-=-=-=-="<<endl;
	lista listaAlunos;
	listaAlunos.inserirInicio("Ricardo",34,'M',true);
	listaAlunos.inserirFim("Ana",13,'F',false);
	listaAlunos.inserirFim("Gabriel",19,'M',true);
	listaAlunos.inserirFim("Vinicius",18,'M',false);
	listaAlunos.imprimir();
	return 0;
}
