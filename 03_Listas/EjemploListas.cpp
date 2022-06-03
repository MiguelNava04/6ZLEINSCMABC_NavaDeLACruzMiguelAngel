/*

Es una estructura de datos que deriva de una secuencia 
conectada de nodos, y cada uno de los cuales 
contiene un dato 

Hay un noodo al comienzo llamado la cabeza o frente 
Hay un nodo de termino llamado la cola o atras

La lista solo puede ser recorrida en sencuencia atras
o hacia delante



Operaciones de la estructura 

Añadir o insertar elementos
Eliminar o borrar elementos
Moverme atraves de la lista desde el primero al utlimo
Buscar elementos 
&
**
*elemento-----> Apuntador memoria(direccion de memoria/peso)
.elemento------> Apuntador dato

list es una clase tmplete que nos permite 
crear listas que contengan cualquier tipo de objeto

incluye las operaciones

push----->meter

pop------>sacar

begin()------> inicio
end()------> final

size()----> tamaño

empty()------>vacio


*/




#include<iostream>

using namespace std;

//definir la estrucutra de la lista 
struct Nodo{
	//los datos de la lista
	int valor;
	Nodo *siguiente;
};

//metodo para insertar 
void insertarLista(Nodo *&, int);
void mostrarLista(Nodo* );

int main(){
	//declarar mi variable de la lista
	Nodo *lista = 	NULL;
	
	//variables
	int op = 1, c, i = 0, valores;
	
	cout<<"Trabajando con listas (simples, doblemente enlazadas, circulares, y circulares dobles"<<endl;
	while(op!=3){
		cout<<"Ejemplo de lista simple"<<endl;
		cout<<"1.- Insertar nuevo valor en la lista"<<endl;
		cout<<"2.- Ver la lista"<<endl;
		cout<<"3.- Salir"<<endl;
		cin>>op; 
		switch(op){
			case 1:
			    cout<<"Indica el numero de valores a introducir\n";
			    cin>>valores;
			    while(i<valores){
			    	cout<<"Valor["<<i<<"\n";
			    	cin>>c;
			    	//mando a llamar al metodo para insertarlo
			    	insertarLista(lista, c);
			    	i++;
				}
				break;
			case 2:
				cout<<"Ver elementos de la lista";
				cout<<"Lo vamos a dejar pendiente";
				break;
			default:
			    cout<<"Gracias por jugar uwu";
			    
		}
		
   }
   
   return 0;
   
   
} 
void insertarLista(Nodo *&lista, int c){
    Nodo *insLista = new Nodo();
    lista->valor = c; 
    //necesito un auxiliar para encadenar los valores de la lista
    Nodo *aux = lista; 
    Nodo *aux2;
   
   //se meten ordenados los datos 
   while((aux!=NULL)&&(aux->valor<c)){
   	   aux2=aux;
   	   aux = aux->siguiente;
    }
    
    if(insLista == aux){
    	lista = insLista;
	}else{
		aux2->siguiente = insLista;
	}
	
	insLista->siguiente=aux; 
	cout<<"Elemento: "<<c<<" Insertado"<<endl;
	
}

void mostrarLista(Nodo *lista){
	Nodo * recurso = new Nodo();
	recurso = lista;
	
	//imprimir los valores
	while(recurso!=NULL){
		cout<<recurso->valor<<endl;
		recurso=recurso->siguiente;
	} 
}

//tarea
/* 
imprimir la lista y hacer que se borre un elemento de la lista
que sea el ultimo
*/


