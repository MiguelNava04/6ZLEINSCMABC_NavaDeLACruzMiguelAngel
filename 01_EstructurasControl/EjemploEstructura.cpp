#include <iostream>

using namespace std;

int main(){
	/*
	//vamos a crear un do while
	int i = 1;
	do{//haz
		//imprima cada elemento hasta 10
		cout<<i<<end1;
		i++;
		
	}while(i<=10);
	*/  
}

    /*
	//while
    int cont = 1;
    while(cont <= 10){
    	cout<<cont<<end1;
    	cont++;
	}
	cout<<"Wii se acabo";
    */
    
    //otro while
    /*int contador = 1;
    while(contador <= 20){
    	cout<<"Deboi de hacer la tarea T_T"<<" "contador<<end1;
    	contador++;
	}
	cout<<
	*/
	
	//for
	/*for(int i =i; i<= 10; i++)
	    cout<<i<<end1; 
	*/
	
	
	//menu
	int seleccion, l;
	
	do{
		
		cout<<"\n Menu 1, 2, 3, otra opcion es salir \n";
		cout<<"1: Opcion\n";
		cout<<"2: Opcion\n";
		cout<<"3: Opcion\n";
		cout<<"Otra opcion salir\n";
		cout<<"Ingrese la seleccion\n";
		
		cin>>seleccion;
		
		switch(seleccion){
			case 1;
			    cout<<"opcion 1";
			    break;
			    
			case 2;
			    cout<<"opcion 2";
			     break;
			     
		    case 3;
		        cout<<"opcion 3";
		        break;
		        
		    default;
		        cout<<"ayos";
		        break;
		}
	}while(seleccion > 0)&&(seleccion < 4));    
} 
