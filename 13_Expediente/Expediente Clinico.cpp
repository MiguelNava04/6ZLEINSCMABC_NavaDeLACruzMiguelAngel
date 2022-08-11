#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#ifdef _MSDOS_
#include <iostream.h>
#else
#include <cstdlib>
using namespace std;
#endif

//lec.open("sangre", ios::on);
typedef struct Paciente{ //estructura de cada paciente
char Nombre[60];

char DNI[9];//Creamos  DNI
char Fecha[11];//Fecha en formato dia,mes y año
char alergico_a[50];// los medicamentos si es alergico 
char tiene_seguro;// S=asegurado y N= No asegurado
int edad;
int tipo_sangre[11];
int fecha_Nacimiento[11];
}Paciente;
void CrearArchivoPaciente(){// guardara la información

FILE *ArchivoPaciente;
Paciente Nuevo;//Creamos un nuevo elemento paciente
system("cls");
printf("\t\t\tNuevo Paciente\n");
fflush(stdin);
printf("\n\t\t*Nombre completo: ");
gets(Nuevo.Nombre);//Capturamos el nombre
printf("\n\t\t*Fecha de Registro: ");//Capturamos la fecha de ingreso
scanf("%s",&Nuevo.Fecha);
char str[40];
  strcpy (str,Nuevo.Nombre);// copiamos a una cadena de caracteres 
strcat (str,".dat");//crear el archivo con su nombre del paciente
ArchivoPaciente=fopen(str,"a+");
fflush(stdin);
if (ArchivoPaciente==NULL){//En caso de un error

system("\nPause");
}
else{
//Guardamos nombre y fecha de registro 
fprintf(ArchivoPaciente,"\n Nombre: %s ",Nuevo.Nombre);

fclose(ArchivoPaciente);//cerramos el archivo
printf("\nPaciente %s registrado con exito.\n",Nuevo.Nombre);
system("\nPause");
} }
void IngresarNuevoPaciente(){// información del nuevo paciente 

FILE *ArchivoPaciente;
Paciente Nuevo;//Crear paciente
system("cls");
printf("\t\t\t**Editar Paciente**\n");

fflush(stdin);
printf("\n\t\t*Nombre a buscar: ");
gets(Nuevo.Nombre);
char str[40];
strcpy (str,Nuevo.Nombre);
  strcat (str,".dat");// para crear ese tipo de archivos 
ArchivoPaciente=fopen(str,"a+");
if (ArchivoPaciente==NULL){//En caso de error

system("\nPause");
}
else{
system("cls");

fflush(stdin);
//atributos del paciente 
printf("\n\t\t*edad: ");fflush(stdin);
scanf("%i",&Nuevo.edad);
//Capturamos el CodPaciente 
printf("\n\t\t*FolPaciente: ");fflush(stdin);
scanf("%s",&Nuevo.DNI);
//Capturamos Alergias
printf("\n\t\t*Alergico a: (ninguno = N): ");fflush(stdin);
gets(Nuevo.alergico_a);
//Capturamos asegurados
printf("\n\t\t*Tiene seguro? (SI/NO): ");fflush(stdin);
scanf("%c",&Nuevo.tiene_seguro);
printf("\n\t\t*tipo de sangre: ");fflush(stdin);
scanf("%c",&Nuevo.tipo_sangre);
printf("\n\t\t*fecha de nacimiento: ");fflush(stdin);
scanf("%c",&Nuevo.fecha_Nacimiento);																							
//Guardamos los datos en los arc 
fprintf(ArchivoPaciente,"\nDNI: %s ",Nuevo.DNI);
fprintf(ArchivoPaciente,"\nAlergico a: %s ",Nuevo.alergico_a);
fprintf(ArchivoPaciente,"\nAsegurado: %c ",Nuevo.tiene_seguro);
fprintf(ArchivoPaciente,"\nEDAD: %i ",Nuevo.edad);
fprintf(ArchivoPaciente,"\nsangre: %c",Nuevo.tipo_sangre);
fprintf(ArchivoPaciente,"\nEdad: %i ",Nuevo.edad);

//Cerramos el archivo
fclose(ArchivoPaciente);

system("Pause");
  }
}
void MostrarHistorialDePaciente(){
Paciente Nuevo;
FILE *Archivo;
system("cls");
fflush(stdin);
printf("\n\t\t***Historial***");
printf("\n\t\t*Nombre a buscar: ");// el nombre del paciente 
gets(Nuevo.Nombre);
char str[40];
strcpy (str,Nuevo.Nombre);
strcat (str,".dat");
Archivo=fopen(str,"r");//Abrimos el archivo para lectura
if (Archivo==NULL){//Si no exista, dará error

system("\nPause");
}
else{
system("cls");

char c[30];
fflush(stdin);
while(!feof(Archivo)){//Mientras no sea el final del archivo
fscanf(Archivo," %[^\n]",&c);
printf("\n%s",c);
}
fclose(Archivo);
printf("\n\n");
system("\tPause");
  }
}
void BuscarHistorialPaciente(){
char nombre[40];
system("cls");
printf("\t\t***Buscar Paciente***\n");
printf("\n\n\t\tIngrese nombre a buscar: ");
fflush(stdin);
gets(nombre);
FILE *Archivo;//creamos una instancia para abrir el archivo
char str[40];
strcpy (str,nombre);
strcat (str,".dat");
Archivo=fopen(str,"a+");//abrimos el archivo para agregar algunos datos
if (Archivo==NULL){
perror("\n\nNo se encuentra el paciente");
system("Pause");
}
else{
system("cls");

char c[30];
fflush(stdin);
while(!feof(Archivo)){
fscanf(Archivo," %[^\n]",&c);//leemos linea por linea
printf("\n%s",c);//Imprimimos lo leido
}
char extras[50];//Cadenas extras para el historial
fprintf(Archivo,"\n\n\n***Nueva Cita*");


fprintf(Archivo,"\nFecha: %s",extras);fflush(stdin);
printf("\tDoctor: ");gets(extras);//Doctor que lo atiende
fprintf(Archivo,"\nDoctor: %s",extras);fflush(stdin);
printf("\tEspecialidad: ");gets(extras);//Especialidad del doctor
fprintf(Archivo,"\nEspecialidad: %s",extras);
printf("\n");
char descripcion[100];// una descripcion de la cita
printf("\nDescripcion: ");fflush(stdin);
gets(descripcion);//capturamos descripcion
fprintf(Archivo,"\nDescripcion: %s",descripcion);//guardamos en el archivo
fclose(Archivo);//cerramos el archivo
system("Pause");
} 
}
int submenu(){
int op=0;
system("cls");
printf("\t\t\t****EXPEDIENTE CLINICO**\n\n");
printf("\t\t1)Crear Archivo Del Paciente\n       ");
printf("\t\t2)Ingresar Datos Nuevo Del Paciente\n");
printf("\t\t3)Mostrar Expediente del Paciente\n  ");
printf("\t\t4)Buscar Expediente \n");
printf("\t\t5)Calculadora imc \n");
printf("\t\t6)Salir\n");
printf("                        ************");
  
scanf("%i",&op);//Leemos la opcion elegida
return op;//Devolvemos la opcion elegida
}


void imc ()
{
    float IMC, altura_en_m, peso_en_kg;
    cout << "Ingresa el valor de altura en m: ";
    cin >> altura_en_m;
    cin.get();
    cout << "Ingresa el valor de peso en kg: ";
    cin >> peso_en_kg;
    cin.get();
    IMC=peso_en_kg/altura_en_m/altura_en_m;
    if(IMC<16)
        cout << "Criterio de ingreso en hospital." << endl;
    if(IMC>=16&&IMC<17)
        cout << "Infrapeso." << endl;
    if(IMC>=17&&IMC<18)
        cout << "Bajo peso." << endl;
    if(IMC>=18&&IMC<25)
        cout << "Peso normal (saludable)." << endl;
    if(IMC>=5&&IMC<30)
        cout << "Sobrepeso (obesidad de grado I)." << endl;
    if(IMC>=30&&IMC<35)
        cout << " (obesidad de grado II)." << endl;
    if(IMC>=35&&IMC<40)
        cout << " (obesidad de grado III)." << endl;
    if(IMC>=40)
        cout << " (obesidad de grado IV)." << endl;
    cout << "Valor de IMC: " << IMC << endl;
    cout << endl;
    system ("pause");
    
}

void Historial_Medico(){
while(1){//Bucle infinito 
switch(submenu()){//Este switch
case 1:
//Crear archivo para un nuevo paciente
CrearArchivoPaciente();
break;
case 2:
//Agregaremos los datos del nuevo paciente
IngresarNuevoPaciente();
break;
case 3:
//En esta sección podremos ver el historial de un paciente
MostrarHistorialDePaciente();
break;
case 4:
//Podremos editar el historial del paciente
BuscarHistorialPaciente();
break;
case 5:

imc();
break;
case 6://Si presiona la tecla 5 sale del bucle
return;
default:
 
system("PAUSE");
} } }
int main(){
Historial_Medico();
return 0;
}
