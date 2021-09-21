/*
   Autor: Carreño Garavito Victor Manuel
   Titulo: Programa que cumpla los siguientes requisitos
				1.- Solicitar un numero de 4 digitos
				2.- Separar los digitos del numero
				3.- Imprimir en letra el numero (unidad de millar, centena, decena y unidad)
				4.- Agregar a la impresion 00/100     (00 centavos)
   Materia: Algoritmos Computacionales 2CM38
*/
#include <iostream>
#include <windows.h>
#define Color SetConsoleTextAttribute
using namespace std;
int main (){
//Herramienta cambiar color texto
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
Color (hConsole, 3); //Se usara para cambiar el color de las letras
//String de letras
//Unidades
string unidad[10] = {" ","uno","dos","tres","cuatro","cinco","seis","siete","ocho","nueve"};
//Unidades con decimas
string uespecial[10] = {" ","once","doce","trece","catorce","quince","dieciseis","diecisiete","dieciocho","diecinueve"};
//Decenas
string decena[10] = {" ","diez","veinte","treinta","cuarenta","cincuenta","sesenta","setenta","ochenta","noventa"};
//Decenas Y
string despecial[10] = {" ","diez","veinti","treinta y","cuarenta y","cincuenta y","sesenta y","setenta y","ochenta y","noventa y"};
//Centenas
string centena[10] = {" ","Cien","Doscientos","Trescientos","Cuatrocientos","Quinientos","Seiscientos","Setecientos","Ochocientos","Novecientos"};
//Centenas especiales
string cespecial[10] = {" ","ciento","doscientos","trescientos","cuatrocientos","quinientos","seiscientos","setecientos","ochocientos","novecientos"};
//Milesimas
string milesima[10] = {" ","Mil","Dos mil","Tres mil","Cuatro mil","Cinco mil","Seis mil","Siete mil","Ocho mil","Nueve mil"};
//Variables Base
int n, num[4] = {};
    //Titulo del programa en general
    Color (hConsole, 2);
	cout<<"\t+---------------------------------------------------+\n";
	cout<<"\t|             Convertidor Numero a Letra            |\n";
	cout<<"\t+---------------------------------------------------+\n";
	Color (hConsole, 5);
	//Solicita la cantidad a convertidor
	cout<<"\nIngrese una cantidad no mayor de 4 digitos: ";cin>>n;
    //Imprime la Cantidad Solicitada
    cout<<"\nLa cantidad ingresada es: $"<<n<<".00";
	//Separacion digitos
	num[0] = (n%10000)/1000;num[1] = (n%1000)/100;num[2] = (n%100)/10;num[3] = (n%10);
	//Proceso de Conversion 
	if(num[0]!=-1 && num[1]==0 && num[2]==0 && num[3]==0) {//Milésima
		cout<<"\n"<<milesima[num[0]]<<" ";
	} else {
		if(num[0]!=-1 && num[1]!=-1 && num[2]==0 && num[3]==0) {//Centena
			cout<<"\n"<<milesima[num[0]]<<" "<<centena[num[1]];
		} else {
			if(num[0]!=-1 && num[1]!=-1 && num[2]!=-1 && num[3]==0) {//Decena
				cout<<"\n"<<milesima[num[0]]<<" "<<cespecial[num[1]]<<" "<<decena[num[2]];
			} else {
				if(num[0]!=-1 && num[1]!=-1 && num[2]!=-1 && num[3]!=-1){//Unidad
					if(num[2]==1){
						cout<<"\n"<<milesima[num[0]]<<" "<<cespecial[num[1]]<<" "<<uespecial[num[2]];
					} else {
						Color (hConsole, 6);
						cout<<"\n\nLa candidad Convertida es: \n\n-->  "<<milesima[num[0]]<<" "<<cespecial[num[1]]<<" "<<despecial[num[2]]<<" "<<unidad[num[3]]<<"\n\n";
					}
				}
			}
		}
	}	
	Color (hConsole, 3);
}
