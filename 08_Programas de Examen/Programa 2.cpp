#include<iostream>
#include<conio.h>

using namespace std;

int num;

main(){
	cout<< "ingresa un numero para saber si es par o impar"<<endl;
	cin>>num;
	if(num%2==0){
		cout<<"El numero es par";
	}else{
		cout<<"El numero es impar";
	}
	getch();
	
}
