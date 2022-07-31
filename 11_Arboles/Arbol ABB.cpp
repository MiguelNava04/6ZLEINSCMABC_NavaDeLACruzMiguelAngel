#include <stdio.h>
#include <stdlib.h>
#include <cctype>

//vamos a definir un temple 
//para el manejo de errores

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

//empezamos con el nodo
struct Nodo{
	int dato;
	Nodo *padre;
	Nodo *izq;
	Nodo *der;
	
};

//metodos 
void insertar(Nodo *&arbol, const int n, Nodo *padre);
void mostrar(Nodo *arbol, int espaciado);
void preOrder(Nodo *arbol);
void intOrder(Nodo *arbol);
void postOrder(Nodo *arbol);
bool esunNumero(const char* cadena);
bool seguirIngresando();
char mainMenu();
int pedirNumero();

int main(){
	char op = '0';
	Nodo *arbol = NULL;
	
	do{
		system("CLS");
		if(arbol){
			printf("\n ****** Ejemplo Arbol ABB****\n\n");
			mostrar(arbol, 0);
			printf("\n -------- Fin de Arbol ABB -------\n\n");
		}
		switch(op = mainMenu()){
			case '1' :
				insertar(arbol, pedirNumero(), NULL);
				break;
			case '2' :
				//preOrder
				printf("\n Recorrido Preorder \n");
				preOrder(arbol);
				printf("\n Fin de preorder \n");
				break;
			case '3' :
				//intOrder
				printf("\n Recorrido Intorder \n");
				inOrder(arbol);
				printf("\n Fin de intorder \n");
				break;
			case '4' :
				//postOrder
				printf("\n Recorrido Postorder \n");
				postOrder(arbol);
				printf("\n Fin de postorder \n");
				break;
		}
		printf("\n");
		system("PAUSE");
	}while(op != '0');
	return 0;
}

char mainMenu(){
	char temp = '0';
	printf("\n Programa de ejemplo arbol ABB\n");
	printf("\n 1.- Insertar\n");
	printf("\n 2.- Leer en Preorden\n");
	printf("\n 3.- Leer en Inorden\n");
	printf("\n 4.- Leer en Postorden\n");
	printf("\n 5.- Salir\n");
	scanf("%c", &temp);
	return temp;
}

bool seguirIngresando(){
	//todo para seguir ingresando valores del arbol
	char temp = '0';
do{
	
}
	
}







bool esUnNumero(const char *cadena){
	for(; *cadena; ++cadena){
		if(!std:: isdigit(*cadena))
		return false;
	}
	return true;
}

int pedirNumero(){
	char temp[255];
	do{
		printf("\n Ingrese numero: \n");
		scanf(" %s", temp);
	}while(!esUnNumero(temp));
	return atoi(temp); //regresa de una cadena a un int 
}
