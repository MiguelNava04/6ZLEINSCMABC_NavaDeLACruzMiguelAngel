/*
vamos a crear un ejemplo de una lista que puede 
contener un dato y manejo de apuntadores


*/

#include<stdio.h> //entrada y salida
#include<stdlib.h> //
#include<string.h>
#include<conio.h> //entrada y salida por parte de la consola 
#include<iostream>

/*
conio es una libreria que da una extension 
a stdio como libreria standar, para el 
manejo de consola usando comando como
getch(), clrstr(), gotoxy(), textcolor(),
y otras 

stdLib es una libreria standar para el manejo 
de funciones de busqueda, ordenamiento, 
arboles, pilas, colas, listas nos sirve 
para las estructuras de datos
*/

using namespace std;

//definimos la lista acorde a 
//un nodo, el acceso, el dato, el apuntador y sig

struct dato{//lista
	int i;
	dato *s;//siguiente
}*a, *i, *p, *e; 

//vamos a meter los metodos de acceso a la lista 

int buscar(int d):
void insertar(int dat);
void mostar(void);
void borrar(void);
void menu(void);

//void guardar(void);
//void cargar(void);

main(){
	menu();
}

//metodo del menu 
void menu(void){
	//vamos a hacer un menu de 6 opciones 
	int opc, da;
	do{
		//imprimir el menu 
		cout<<"Ejemplo para una lista compleja que carga los datos"endl<<;
		cout<<"\n 1.-Buscar datos: ";
		cout<<"\n 2.-Insertar datos: ";
		cout<<"\n 3.-Mostrar datos: ";
		cout<<"\n 4.-Borrar datos: ";
		cout<<"\n 5.-Guardar datos en Archivo: ";
		cout<<"\n 6.-Cargar datos en Archivo: ";
		cout<<"\n 7.-Salir: ";
		cout<<"\n Seleccione la opcion deseada ";
		cin>>opc;
		//menu
		switch(opc){
			case 1:
				//buscar
				cout<<"\n\n Ingresa el dato a buscar";
				cin>>da;
				if(buscar(da)){
					cout<<"Buscar dato si existe wiii";
				}else{
					cout<<"Dato no existe, solo juguito";
					getch();
				}
				break;
		    case 2:
		    	cout<<"Ingresa el dato: ";
		    	cin>>da;
		    	insertar(da);
		    	break;
		    case 3:
		    	mostrar();
		    	break;
		    case 4:
		    	borrar();
		    	break;
		    case 5;
		        //guardar();
		        break;
		    case 6:
		    	//cargar();
		    	break;
		    case 7:
		    	cout<<"\n\n Ayos uwu :3";
		    	getch();
		    	//borrar todos los datos de la lista 
		    	p=i;
		    	while(p){
		    		a=p;
		    		p=p->s;
		    		delete(a); //metodo de la lista  
				}
				exit(0); //se cierra todo 
			default:
			    cout<<"Aprenda a leer ��";
			    getch();
		}
	}while(opc);
}

//mostrar

void mostrar(void){
	int cont = 1;
	if(!i){
		//no hay lista que mostrar 
		cout<<"No hay lista que mostrar";
		getch();
		return;
	}
	//si hay datos 
	p=i;
	cout<<"\n\n";
	while(p){
		//como si existe la lista la recorremos 
		cout<<cont++<<"\n Valor = "<<p->i<<endl;
		p = p->s;
	}
	cout<<"\n Fin de la lista";
	getch(); 
} 
