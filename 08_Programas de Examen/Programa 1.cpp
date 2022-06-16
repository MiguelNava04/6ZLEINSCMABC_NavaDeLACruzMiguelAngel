#include<iostream>
#include<conio.h>

using namespace std;

int a, b=1, c;

main(){
	cout<<"ingresa un numero para saber si es primo"<<endl;
	cin>>a;
	while (b<=a){
		if(a%b==0){
			c++;
		}
	b++;	
	}

	if(c==2){
		cout<<"si es primo";
	}else{
		cout<<"no es primo";
	}
	getch();
} 
