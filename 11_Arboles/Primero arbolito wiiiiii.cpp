/*
Ejemplo de un arbol binario
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>


//vamor a crear la estructura de la base de un arbol
struct nodo{
	//primero el dato
	char dato;
	//nodo derecho
	struct nodo *der;
	//nodo izquiero 
	struct nodo *izq;
};
//poder operar con las ramas izq y der
typedef struct nodo_nodo;

//vamos a crear una difinicion de la 
//operacin de ramas izq y der

_nodo *crear(char dato){
	//nodo actual, rama izq, rama der
	if(raiz != NULL){
		imprimir(raiz);
		//recursividad
		preOrden(raiz->izq);
		preOrden(raiz->der);
	}
}

//in orden

void inrOrden(_nodo *raiz){
	//nodo izq,raiz, rama der
	if(raiz != NULL){
		
		//recursividad
		preOrden(raiz->izq);
		preOrden(raiz->der);
	}
}

//pos orden
void porOrden(_nodo *raiz){
	//nodo izq, der, raiz
	if(raiz != NULL){
		
		//recursividad
		preOrden(raiz->izq);
		preOrden(raiz->der);
		imprimir(raiz);
	}
}

int main(){
	_nodo *raiz;
	raiz = crear('+');
	raiz-> izq = crear('*');
	raiz-> der = crear('*');
	
	raiz -> izq -> izq = crear('A');
	raiz -> izq -> der = crear('B');
	
	raiz -> der -> izq = crear('/');
	
	raiz -> der -> izq -> izq = crear('C');
	raiz -> der -> izq -> der = crear('D');
	
	raiz -> der -> der = crear('2');
	
	//imprimimos arbolito de navidad
	printf("Preorden (RID): \n ");
	
	printf("\n Inorden (IRD): \n ");
	inOrden(raiz);
	
	printf("\n Posorden (IDR): \n ");
	posOrden(raiz);
	
	return 0;
}
