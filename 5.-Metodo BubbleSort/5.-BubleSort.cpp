/*
   Autor: Carreño Garavito Victor Manuel
   Titulo: Programa que cumpla los siguientes requisitos
			1.Teclee 10 datos y guárdelos en un arreglo. Imprima los datos capturados
			2.Ordene los 10 datos capturados a través del método de Burbuja. Imprima los datos ordenados
   Materia: Algoritmos Computacionales 2CM38
*/
#include<iostream>
#include <windows.h>
#define Color SetConsoleTextAttribute
using namespace std;
//Herramienta cambiar color texto
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
int main()
{
//Variables
int vector[11], aux;
//Titulo
Color (hConsole, 2);
cout<<"\t+---------------------------------------------------+\n";
cout<<"\t|             Algoritmo Bubblesort                  |\n";
cout<<"\t+---------------------------------------------------+\n";
cout<<"\nIngrese 10 digitos\n\n";
//Solicita los digitos
Color (hConsole, 6);
for(int a=1; a<=10; a++)
{
cout<<"ingrese el numero "<<a<<" ";
cin>>vector[a];
}
//Impresion de numeros ingresado
Color (hConsole, 9);
cout<<"\nLos numeros Ingresados son: \n";
for(int b=1; b<=10; b++){
cout<<"["<<vector[b]<<"]"; }
//Metodo Burbuja
for(int c=0; c<=10; c++){
		for(int d=0; d<=10;d++){
		     if(vector[d]>vector[d+1])
			 {
			aux=vector[d];
			vector[d]=vector[d+1];
			vector[d+1]=aux;
		}
	}
}
//Imprime los numeros ordenados
Color (hConsole, 3);
cout<<endl<<endl<<"Los numeros Ordenados son: "<<endl;
for(int b=1; b<=10; b++) {
      cout<<"["<<vector[b]<<"]";
	  }
cin.get();
cin.get();
}
