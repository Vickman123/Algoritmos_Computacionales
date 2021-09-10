/*
   Autor: Carreño Garavito Victor Manuel
   Titulo: Programa que separa un texto y por medio de la busqueda lineal encuentra la veces que se repite
           un caracter en el texto .
   Materia: Algoritmos Computacionales 2CM38
*/
#include <iostream>
#include <stdlib.h>
#include <windows.h>

#define Color SetConsoleTextAttribute

using namespace std;

int main(){
	
	//Herramienta cambiar color texto
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	Color (hConsole, 3); //Se usara para cambiar el color de las letras
	
	//Variables a considerar
	int x , b , c ;
    char texto[30] = {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char encontrar = ' ';
    
	    
		//Titulo del programa en general
		cout<<"\t+-----------------------------------------+\n";
		cout<<"\t|             BUSQUEDA LINEAL             |\n";
		cout<<"\t+-----------------------------------------+\n";
		
		
		//Solicita el texto y lo guarda en el char(texto)
	    Color (hConsole, 2);
	    cout<<"\nIngrese un texto: ";
		gets(texto);
	    fflush(stdin);
	    
	    
		//Muestra el texto que se ingreso
	    Color (hConsole, 5);
	    fflush(stdin);
	    cout<<"\nEl texto ingresado es:  "<<texto<<" \n";
	    
	    
		//Muestra el texto separado por caracteres
	    Color (hConsole, 6);
	    cout<<"\nEl texto separado es:  ";
		
			
			//Proceso de Separacion del texto
			for (x=0; x<30; x++)
			{
	    	Color (hConsole, 9);
			cout<<"  "<<texto[x]<<"  ";
		}
		
		
		//Funcion de encontrar el caracter
		Color (hConsole, 8);
		cout<<"\nTeclee el caracter a encontrar: ";
		cin>>encontrar;
		
			
			//Proceso de busqueda
			for(x= 0; x<30; x++){
				if (texto[x] == encontrar) 
				{
					c = c+ 1;
					b = 1;
				}
			}
		
				
				//En caso de no encontrarlo mostrara el mensaje "No se encontro el caracter " en rojo.
				if (b == 0){
					Color (hConsole, 4);
					cout<<"\n\tNo se encontro el caracter: "<<encontrar<<"\n\n";
				}
				
				
				//En caso de encontrarlo  mostrara el caracter y las veces que ses repitio
				else{
				    Color (hConsole, 3);
				    cout<<"\nEl caracter \""<<encontrar<<"\" se repitio  "<< c <<"  veces.\n\n";	
				}
		
		
		//Finaliza el programa
	    return 0;
	    
}
