/*
vamos a jugar con arreglos
*/

#include<iostream>

using namespace std;

int main(){
	int numero[5] = {200, 150, 50, 200, 100}; //un array de 5 numeros enteros
	int suma = 0;
	
	//inicializamos los valores del arreglo
	/*numero[0] = 200;
	numero[1] = 50;
	numero[2] = 100;
	numero[3] = 50;
	numero[4] = 300;*/
	
	//hallar la suma de los elementos del arreglo
	//suma = numero[0] + numero[1] + numero[2] + numero[3] + numero[4];
	
	//ineficiente
	//interador
	int i;
	for(i = 0; i<=4; i++){
	    suma += numero[i];
	}
	cout<<"\nDato \n\n"<<suma;
	
	return 0; 
}
