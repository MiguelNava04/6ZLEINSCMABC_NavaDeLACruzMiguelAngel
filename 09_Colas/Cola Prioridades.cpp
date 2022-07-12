/*
vamos a ver una cola que se atiene 
por prioridades
*/


#include <iostream>
#include <stdlib.h>

using namespace std;

//definir el nodo
 
struct nodo{
	char dato;
	int priori;
	struct nodo *siguiente;
};

//cola

struct cola{
	nodo *delante;
	nodo *atras;
};

//crear nodo

struct nodo*crearNodo(char x, int pri){
	struct nodo *nuevoNodo = new(struct nodo);
	nuevoNodo->dato = x;
	nuevoNodo->priori = pri;
	return nuevoNodo;
}

void encolar(struct cola &q, char valor, int priori){
	//auxiliar para mover el nodo 
	struct nodo *aux = crearNodo(valor, priori);
	aux->siguiente = NULL;
	
	if(q.delante== NULL){
		//el primero en encolar
		q.delante = aux;
	}else{
		(q.atras)->siguiente = aux;
	}
	//siempre debe apuntar al ultimo 
	q.atras = aux;
}


//mostrar la cola
void muestraCola(struct cola q){
	struct Nodo *aux;
	
	aux = q.delante;
	
	cout<<"\n Caracter de Prioridad\n";
	
	while(aux"=NULL"){
		cout<<" "<<aux->dato<<" | "<<aux->priori<<endl;
		aux - aux->siguiente;
	}
}

//definir una prioridad 
//criterio 0 

void ordenarPrioridad(struct &q){
	//metodo de burbuja 
	
	//necesito 2 aux 
	struct nodo *aux1, *aux2;
	int p_aux;
	char c_aux;
	
	//aux1 va a ser mi colita con los datos
	aux1 = q.delante;
	
	while(aux1->siguiente !=NULL){
		//comparar aux1 vs aux2
		aux2 = aux1->siguiente;
		while(aux2 !=NULL){
			
			if(aux1->priori > aux2->priori){
				p_aux = aux1->priori;
				c_aux = aux1->dato;
				
				aux1->priori = aux2->priori;
				aux1->dato = aux2->dato;
				
				aux2->priori = p_aux;
				aux2->dato = c_aux;
			}
			aux2=aux2->siguiente;
		}
		aux1 = aux1->siguiente;
	}
}

void insertar(struct cola &q, char c, int pri){
	
	//primero encolar 
	encolar(q, e, pri);
	
	//ordenar
	ordenarPrioridad(q);
}


void menu(){
	cout<<"\n Cola de Prioridad\n";
	cout<<"1.- Encolar\n";
	cout<<"2.- Mostrar Cola\n";
	cout<<"3.- Salir\n";
	
}

/*
supongamos que quiero 
guardar la cola en archivo
txt

void guardar(){
    //primero es crear el archivo 
    FILE *archivo;
    archivo = fopen("guardar.txt", "w");//aqui va el nombre
    //se le conoce como la serializacion del archivo 
    int i = 0;
    if(!i)
        cout<<"No hay nada que guardar";
        getchar();
        return;
    }
    q = i;
    while(q){
    fprint(archivo, "%i\n", q->dato)  //%i es para enteros, %c es caracter
    q = q->siguiente
    }
    cout<<"archivo guardado";
    //es importante cerrar el flujo del archivo
    fcLose(archivo);
    getchar();
}

para cargar es lo mismo solo que ahora es cargar

fscanf(archivo, "%i\n", &q)
*/

int main(){
	struct cola q;
	
	q.delante = NULL;
	q.atras = NULL;
	
	//variables
	char c; //caracter a encolar
	int priori; //prioridad
	int op; //opcion del menu
	int x; //para la funcion pop 
	
	do{
		menu();
		cin>>op;
		switch(op){
			case 1:
				cout<<"\n Ingrese caracter\n";
				cin>>c;
				cout<<"\n Ingrese la prioridad:\n";
				cin>>priori;
				
				insertar(q, c, priori);
				
				cout<<"\n Caracter: "<<c<<" encolado\n";
				break;
			case 2: 
			    cout<<"\n Mostrar la cola \n";
			    if(q.delante !=NULL){
			    	mostrarCola(q);
				}else{
					cout<<"\n Cola vacia\n";
				}
				break;
			default:
				cout<<"\n Opcion no valida\n";
				system("pause");
				exit(0);
		}
		system("pause");
		system("cls");
	}while(op!=3);
	return 0;
}
