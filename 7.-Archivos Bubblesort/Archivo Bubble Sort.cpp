/*
   Autor: 	Carreño Garavito Victor Manuel
   Titulo:	Desarrolle un algoritmo que utilice el metodo de burbuja para ordenar datos de un archivo
   Materia: Algoritmos Computacionales 2CM38
*/
#include <iostream>
#include <string>
#include <stdlib.h>  
#include <locale.h>
#include <windows.h>
#define Color SetConsoleTextAttribute
using namespace std;
//Funcion de registro                
struct Registro{     
  int va;
}registro;
//Inicio del programa
int main (){
//Herramienta cambiar color texto
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
//Variables
int i,f,v,in,n,j;
string nombreArchivo;
FILE *archivoA; 	
Color (hConsole, 8);	
cout<<"\t+---------------------------------------------------+\n";
cout<<"\t|             Creacion y ordenamiento               |\n";
cout<<"\t|            de archivos por Bubblesort             |\n";
cout<<"\t+---------------------------------------------------+\n";
	Color (hConsole, 3);
	//Solicita el nombre del archivo
	printf("\nIngrese el nombre del archivo a crear: ");
	cin >> nombreArchivo;
	nombreArchivo+= ".txt";		
	//Crea el archivo
	Color (hConsole, 9);
	archivoA= fopen(nombreArchivo.c_str(), "w");	
  		if(archivoA == NULL ){
			printf("\nNo se creo el archivo ");
			exit(1);   
		}	
		else{
			printf("\nSe creo correctamente  %s\n\n ", nombreArchivo.c_str() );
    	}
	//Solicita cuantos numeros tendra	
	cout<<"\nAhora, cuantos numeros desea que contenga el archivo?:  \n";
	cin>>n;
    int num[n] ={};
    Color (hConsole, 6);
	// Se establece el rango de números dentro del archivo	
	cout<<"\nIndice el rango que tendrán estos numeros:";
	cout<<"\n\nRango inicial(puede ser 0 o cualquier numero menor a 10000)";
	cout<<"\n\nRango final(no puede exceder del numero 10000)";
	cout<<"\n\n\n--> si el numero tecleado es mayor,se repetira el proceso";
	//Solicita el rango de numeros a generar
	do{
		Color (hConsole, 5);
		//Rango Inicia
		printf ("\nRango inicial:  ");scanf("%i",&i);  
		in=i;
		//Rango Final
		printf ("\nRango final:  ");scanf("%i",&f);
	}while(f-i>10001);        
	//Abre el archivo	
	for (i=0; i<n; i++){
		v=in + rand () %(f+1 - in);
		num[i]=v;
		registro.va=v;
		fprintf(archivoA, "%i\n", registro.va);
	}
	Color (hConsole, 4);
	cout<<"\nSe generaron correctamente en el archivo  "<<i<<"  numeros\n";
	//metodo burbuja
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(num[j]>num[j+1]){
				int aux = num[j];
				num[j] = num[j+1];
				num[j+1] = aux;
			}
		}
	}
	//Ordenamiento para archivo
	for (i=0; i<n; i++){
		registro.va=num[i];
		fprintf(archivoA, "\n%i ", registro.va);
		}
    fclose(archivoA);  
  	return (0);
}
