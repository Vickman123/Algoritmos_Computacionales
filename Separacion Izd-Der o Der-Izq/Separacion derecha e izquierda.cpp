/*
   Autor: Carreño Garavito Victor Manuel
   Titulo: 	Programa que voltee el primer texto de izquierda a derecha 
            luego el resultado voltearlo de derecha a izquierda e imprimir los tres resultados
   Materia: Algoritmos Computacionales 2CM38
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <windows.h>

#define Color SetConsoleTextAttribute

using std::cout; using std::cin; using std::endl;
using std::string; using std::reverse;

int main(){
	//Herramienta cambiar color texto
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	Color (hConsole, 3); //Se usara para cambiar el color de las letras
	
	//Variables
    char tmp_s[10];
    string tmz_s;
    
    	//Titulo del programa en general
    	Color (hConsole, 3);
		cout<<"\t+-----------------------------------------+\n";
		cout<<"\t|        Voltear Texto Izq-Der             |\n";
		cout<<"\t|                  o                       |\n";
		cout<<"\t|        Voltear Texto Der-Izq             |\n";
		cout<<"\t+-----------------------------------------+\n\n";
    
    //Ingresar Texto
    Color (hConsole, 2);
    cout <<"Ingrese el texto:  ";
    cin >>tmp_s;
    cout <<"\n\nEl texto Ingresado es: \n";
    cout << tmp_s << endl;
    
    //Primer Reverse
    string tmp_s_reversed(tmp_s);
    reverse(tmp_s_reversed.begin(), tmp_s_reversed.end());
    //Imprime Reverse
    Color (hConsole, 5);
    cout <<"\n\n El primer Reverse es: \n\n";
    cout << tmp_s_reversed << endl;
    
    //Segundo Reverse
    tmz_s = tmp_s_reversed;
    string tmz_s_reversed(tmz_s);
    reverse(tmz_s_reversed.begin(), tmz_s_reversed.end());
    //Imprimir Segundo Reverse
    Color (hConsole, 4);
    cout <<"\n\n El segundo Reverse es: \n\n";
    cout << tmz_s_reversed << endl;
    
    return EXIT_SUCCESS;
}
