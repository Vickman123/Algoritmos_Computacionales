/*
   Autor: Carreño Garavito Victor Manuel
   Titulo: 	Programa que cumpla las siguientes funciones
			1.- Solicitar un numero de 4 dígitos
			2.- Separar los dígitos del numero
			3.- Imprimir en letra el numero (unidad de millar, centena, decena y unidad)
			4.- Agregar a la impresión 00/100     (00 centavos)
			Utilizando Funciones y For Infinito
   Materia: Algoritmos Computacionales 2CM38
*/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h> 
#include <time.h>
#define N 11 //define la longitud maxima que es posible para el numero
#define Color SetConsoleTextAttribute
using namespace std;

//Funciones
void unidades(char num[N],int x);
void unidades2(char num[N],int x);
bool decenas(char num[N],int x);
void centenas(char num[N],int x);
void miles(char num[N],int x);
void gotoxy(int x, int y);

//Proceso de Funciones
//Funcion de unidades Solitarias
void unidades(char num[N],int x){
 switch(num[x]){//UNIDADES
 case '0':cout<<"cero"<<" ";break;
 case '1':cout<<"uno"<<" ";break;
 case '2':cout<<"dos"<<" ";break;
 case '3':cout<<"tres"<<" ";break;
 case '4':cout<<"cuatro"<<" ";break;
 case '5':cout<<"cinco"<<" ";break;
 case '6':cout<<"seis"<<" ";break;
 case '7':cout<<"siete"<<" ";break;
 case '8':cout<<"ocho"<<" ";break;
 case '9':cout<<"nueve"<<" ";break;
 }
}

//Funcion de Unidades con decenas
void unidades2(char num[N],int x){
 switch(num[x]){//UNIDADES
 case '1':cout<<"once"<<" ";break;
 case '2':cout<<"doce"<<" ";break;
 case '3':cout<<"trece"<<" ";break;
 case '4':cout<<"catorce"<<" ";break;
 case '5':cout<<"quince"<<" ";break;
 case '6':cout<<"dieciseis"<<" ";break;
 case '7':cout<<"diecisiete"<<" ";break;
 case '8':cout<<"dieciocho"<<" ";break;
 case '9':cout<<"diecinueve"<<" ";break;
 }
}

//Funcion de Decenas
bool decenas(char num[N],int x){
 bool r=true;
 switch(num[x]){//DECENAS
 case '1':if(num[x+1]!='0'){unidades2(num,x+1);r=false;}else{cout<<"diez"<<" ";}break;
 case '2':cout<<"veinte";if(num[x+1]!='0'){cout<<" y"<<" ";}break;
 case '3':cout<<"treinta";if(num[x+1]!='0'){cout<<" y"<<" ";}break;
 case '4':cout<<"cuarenta";if(num[x+1]!='0'){cout<<" y"<<" ";}break;
 case '5':cout<<"cincuenta";if(num[x+1]!='0'){cout<<" y"<<" ";}break;
 case '6':cout<<"sesenta";if(num[x+1]!='0'){cout<<" y"<<" ";}break;
 case '7':cout<<"setenta";if(num[x+1]!='0'){cout<<" y"<<" ";}break;
 case '8':cout<<"ochenta";if(num[x+1]!='0'){cout<<" y"<<" ";}break;
 case '9':cout<<"noventa";if(num[x+1]!='0'){cout<<" y"<<" ";}break;
 }
 return r;
}

//Funcion de Centenas
void centenas(char num[N],int x){
 switch(num[x]){
 case '1':(num[x+2]!='0')?cout<<"ciento"<<" ":cout<<"cien"<<" ";break;
 case '2':cout<<"doscientos"<<" ";break;
 case '3':cout<<"trescientos"<<" ";break;
 case '4':cout<<"cuatrocientos"<<" ";break;
 case '5':cout<<"quinientos"<<" ";break;
 case '6':cout<<"seiscientos"<<" ";break;
 case '7':cout<<"setecientos"<<" ";break;
 case '8':cout<<"ochocientos"<<" ";break;
 case '9':cout<<"novecientos"<<" ";break;
 }
}

//Funcio de Millares
void miles(char num[N],int x){
 switch(num[x]){
 case '1':cout<<"Mil"<<" ";break;
 case '2':cout<<"Dos mil"<<" ";break;
 case '3':cout<<"Tres mil"<<" ";break;
 case '4':cout<<"Cuatro mil"<<" ";break;
 case '5':cout<<"Cinco mil"<<" ";break;
 case '6':cout<<"Seis mil"<<" ";break;
 case '7':cout<<"Siete mil"<<" ";break;
 case '8':cout<<"Ocho mil"<<" ";break;
 case '9':cout<<"Nueve mil"<<" ";break;
 }
}

//Ordenacion de Texto
void gotoxy(int x, int y){
 COORD coord={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
} 

int main(){
 //Herramienta cambiar color texto
 HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
 //Variables
 char num[N];
 bool b,a;
 int x,y=-1,i;
 //Inicio del programa
 do{
	//Titulo del programa en general
	Color (hConsole, 2);
	cout<<"\t+---------------------------------------------------+\n";
	cout<<"\t|             Convertidor Numero a Letra            |\n";
	cout<<"\t+---------------------------------------------------+\n";
    fflush(stdin);
  do{a=true;
    b=true;
    Color (hConsole, 4);
    cout<<"\nIngrese una cantidad no mayor de 4 digitos: ";
	cin.getline(num,N);
	cout<<"\nLa cantidad ingresada es: $"<<num<<".00\n";
    x=strlen(num);}
	while(x<1||x>10); fflush(stdin);
	Color (hConsole, 6);
	cout<<"\nConvertido a letras es:\n\n";
    while(x>=1){
    y++;
    fflush(stdin);
   switch(x){
    case 1:if(a==true&&b==true)unidades(num,y);a++;if(num[0]=='0'){x=1;}break;
    case 2:b=decenas(num,y);if(num[y+1]=='0'){x=1;}break;
    case 3:centenas(num,y);break;
    case 4:if(b==true)miles(num,y);break;
    Color (hConsole, 3);
    case 5: cout<<"Lo siento pero solo puedo convertir cantidades de 4 digitos";x=1;break;
   }
   --x;
   fflush(stdin);
  }y=-1;
  fflush(stdin);
  Color (hConsole, 6);
  cout<<"\n\n\nDesea insertar otro numero (1)\n\nDesea salir (0):  \n\n\t";cin>>i;}while(i!=0);
}


