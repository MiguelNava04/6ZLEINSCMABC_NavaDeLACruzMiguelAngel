#include <iostream>
#include <queue>
#include <stack>

/*
vamos a crear un grafo que pueda determinar la 
busqueda de nodos para su recorrido 
*/

using namespace std;

class Grafo{
	private:
		int vertice, arista;
		int **adyMatriz;
		int *visitado;
		
		/*Cuando tenemos un doble apuntador 
		este esta obteniendo tanto
		el dato como el espacio de memoria*/
		
	public :
		//constructor
		Grafo(int ver, int arc):vertice(ver), arista(arc){
			//estos son los constructores del metodo 
			adyMatriz = new int *[ver];
			for(int i = 0; i < vertice; i++){
				adyMatriz[i] = new int[vertice];
				for(int j = o; < vertice; i++){
					adyMatriz[i][j] = 0;
				}
			}
			visitado = new int[vertice];
		}
		
		void visitado(){
			fir(int i = 0; i < vertice, i++){
				visitado[i] = 0;
			}
		}
		
		//destructor
		~Grafo(){
			for(int i = 0; i < vertice i++){
                delete[] adyMatriz[i];
                
			}
			
			delete[] ady-Matriz;
		}
		
		void crear_grafo(){
			for(int i = 0; i <vertice; i++){
				for(int j = 0; j < vertice; j++){
					cin>>adyMatriz[i][j];
					//meto coordenadas
				}
			}
		}
		
		void agregarArista(int i, int j){
			if(i >= 0 && i < vertice && j >0 && j < vertice)
		        adyMatriz[i][j] = 1;
		}
 };
