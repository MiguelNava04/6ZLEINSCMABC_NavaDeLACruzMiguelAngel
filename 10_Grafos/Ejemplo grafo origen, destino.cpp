/*
Ejemplo de un grafo que se encarga de todos los caminos o las 
conexiones que tendra un grafo que se encargue de la 
busqueda de la anchura de sus nodos
*/

#include<stdio.h>
#include<queue> //es una estructura que sirve para poder utilizar los elementos de colas,
               //sirve para meter y sacar elementos de una cola, asi como tambien poder realizar la busqueda 

using namespace std;

#define MAX 500

//vector
vector<int> ady[MAX];
//para saber si el nodo ya fue visitado
boot visitado[MAX];

void bfs(){
	int ini, fin;
	
	printf("Nodo raiz: \n");
	scanf("%d", &ini);
	//%d es enteros, %f es flotantes, %s cadenas, %c caracteres
	
	printf("Nodo final: ");
	scanf("%d", &fin);
	
	//creamos una cola para almancenar los nodos del grafo
	queue<int> Q;
	
	//contar los pasos del recorrido del grafo
	Q.push(ini);
	
	//mientras exista otro nodo 
	//mientras la cola no este vacia
	
	int pasos = 0, maxi = 0;
	
	while(!Q.empty()){
		//saber si la memoria de la cola la estoy usando respecto
		//del tamaño
		
		maxi = max(maxi, (int)Q.size());
		
		int actual = Q.front(); Q.back();
		
		pasos++;
		
		if(actual == fin) break;
		
		//tengo que saber en donde estoy
		visitado[actual] = true;
		//contador para saber donde he estado
		for(int 1 = 0; i < ady[actual].size(); ++i){
			
			//saber si tiene nodos adyecentes
			if(!visitado[ady[actual][i]]){
				
			
			    //si obtengo el interador i nos va a decir la posicion de donde
			   //se encuentra el nodo
			   printf("%d  -->  %d", actual, ayd[actual][i]);
			   Q.push(ady[actual][i]);
		    }
		}
	}
	
	printf("Memoria maxima de uso: %d\n", maxi);
	printf("Maximo de pasos que ha dado: %d\n", pasos);
}

int main(){
	
	//variables del grafo
	int V, E, X, Y;
	
	printf("ingresa el numero de vertice y arista: \n");
	scanf("%d %d", &V, &E);
	
	//recorremos su origin y fin
	
	for(int i = i; i <= E; ++i){
		//necesitamos su origen y destino
		printf("Ingresa el nodo de origen y destino:\n");
		scanf("%d %d", &x, &y);
	}
	bfs();
	
	return 0; 
}
