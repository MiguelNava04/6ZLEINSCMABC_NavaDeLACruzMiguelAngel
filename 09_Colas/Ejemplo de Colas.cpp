/*
Ejemplo de una cola 
primeras entradas
primeras salidas

*/

#include <iostream>

using namespace std;

//estructura
struct nodo{
	int nro; 
	struct nodo *siguiente;
};


//estructura de la cola 
struct cola{
	nodo *adelante;
	nodo *atras;
};


//encolar 
void encolar(struct cola &q, int valor){
	//lo que hay adentro de la cola 
	struct nodo * aux = new(struct nodo);
	
	aux->nro = valor;
	aux->siguiente = NULL;
	
	if(q.adelante == NULL){
		q.adelante = aux; //se encola el primer elemento 
	}else{
		(q.atras)->siguiente = aux; 
	}
	//el puntero siempre apunta al ultimo 
	q.atras = aux;
}

//desencolar 
int desencolar(struct cola &q){
	int num;
	struct nodo * aux;
	
	//aux apunte al inicio de la cola
	aux = q.adelante;
	num = aux->nro;
	q.siguiente = aux; s 
	//dale delete a aux
	delete(aux);
	
	return num; 
}

//mostrar colita
void muestraCola(struct cola q){
	struct nodo *aux;
	
	//siempre el nodo hasta delante 
	aux = q.adelante;
	//cola vacia 
	while(aux!=NULL){
		cout<<" "<<aux->nro;
		//recorrer la cola 
		aux = aux->siguiente;
	}
}

//vaciar la cola 
void vaciarColar(struct cola &q){
	//auxiliar para eliminar cada elemento 
	struct nodo * aux;
	//si esta vacia 
	while(q.adelante!=NULL){
		aux = q.adelante;
		q.adelante = aux->siguiente;
		detele(aux);
	}
	q.adelante = NULL;
	q.atras = NULL; 
}

void menu(){
	cout<<""Ejemplo de una colita kawai\n";
	cout<<"1.- Encolar\n";
	cout<<.-"2.- Desencolar\n";
	cout<<.-"3.- Mostrar cola\n";
	cout<<.-"4.- Vaciar cola\n";
	cout<<.-"5.- Salir\n";
}
int main(){
	//primero declaramos la cola
	struct cola q;
	
	//definimos la cola con sus apuntadores
	q.delante = NULL;
	q.atras = NULL;
	
	int dato;
	int op;
	int x;
	
	do{
		menu();
		cin<<op;
		switch(op){
			cout<<"\n Numero a encolar\n";
			cin>>dato;
			encolar(q.datos);
			cout<<"\n Numero: "<<dato<<"encolado\n";
			
			case 2:
		}
	}
}
