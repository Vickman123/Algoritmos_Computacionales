/*
   Autor: Carreño Garavito Victor Manuel
   Titulo: Programa que separe en digitos un numero segun sea la opcion que eliga
           el usuarios desde un numero de 4 digitos hasta 9 digitos
   Materia: Algoritmos Computacionales 2CM38
*/

#include <iostream>
#include <cstdlib>
#include <windows.h>

#define Color SetConsoleTextAttribute

using namespace std;
 
void pausa();
 
int main()
{
    bool bandera=false;
    char tecla;
    int num,dig,v1,v2,v3,v4,v5,v6,v7,v8,v9,v10;;
    char Numero[10];
    //Herramienta cambiar color texto
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	Color (hConsole, 3); //Se usara para cambiar el color de las letras
    do
    {
        system("cls");
        cin.clear();
    //Menu de Opciones
		cout<<"+----------------------------------------------------------+\n";
		cout<<"|    De cuantos digitos es el numero a ingresar            |\n";
		cout<<"+----------------------------------------------------------+\n";        
        Color (hConsole, 2);
		cout << "\t1 .- De 4 Digitos" << endl;
        Color (hConsole, 4);
		cout << "\t2 .- De 5 Digitos" << endl;
        Color (hConsole, 1);
		cout << "\t3 .- De 6 Digitos" << endl;
        Color (hConsole, 9);
		cout << "\t4 .- De 7 Digitos" << endl;
		Color (hConsole, 5);
        cout << "\t5 .- De 8 Digitos" << endl;
        Color (hConsole, 7);
        cout << "\t6 .- De 9 Digitos" << endl;
        Color (hConsole, 6);
        cout << "\t7 .- Salir" << endl << endl;
        Color (hConsole, 8);
        cout << "Elije una opcion: ";
        cin >> tecla;
        
    //Division de caso para separar los numeros en sus respectivos digitos
		switch(tecla)
		{
			case '1':
				system("cls");
				//Opcion 1.- Dividir 4 digitos
				cout << "Has elejido  4 digitos.\n";
				cout<<"Digite el numero: \n"; cin>>num;//Solicita el numero y lo almacena en num
				cout<<"\nEl numero Digitado es: \n"<<num;//Muestra el numero almacenado en num
				//Proceso de separacion
					dig=num%10;
	                //Separacion primer digito
					v1=dig;
					num=num/10;
					dig=num%10;
					//Separacion segundo digito
					v2=dig;
					num=num/10;
					dig=num%10;
					//Separacion tercer digito
					v3=dig;
					num=num/10;
					dig=num%10;
					//Separacion cuarto digito
					v4=dig;
				//Impresion Resultado			
				cout<<"\nEl numero separado es: \n";//Imprime el resultado
				cout<<""<<v4<<" "<<v3<<" "<<v2<<" "<<v1<<"\n\n";//Imprime el resultado separado por espacios
				pausa();
				break;
 
		case '2':
				system("cls");
				//Opcion 2.- Dividir 5 digitos
				cout << "Has elejido de 5 digitos.\n";
				cout<<"Digite el numero: "; cin>>num;//Solicita el numero y lo almacena en num
				cout<<"\nEl numero Digitado es: \n"<<num;//Muestra el numero almacenado en num
				//Proceso de separacion
					dig=num%10;
					//Separacion primer digito
					v1=dig;
					num=num/10;
					dig=num%10;
					//Separacion segundo digito
					v2=dig;
					num=num/10;
					dig=num%10;
					//Separacion tercer digito
					v3=dig;
					num=num/10;
					dig=num%10;
					//Separacion cuarto digito
					v4=dig;
					num=num/10;
					dig=num%10;
					//Separacion quinto digito
					v5=dig;
				//Impresion Resultado			
				cout<<"\n\nEl numero separado es: \n";//Imprime el resultado
				cout<<" "<<v5 <<" "<<v4<<" "<<v3<<" "<<v2<<" "<<v1<<"\n\n";//Imprime el resultado separado por espacios
				pausa();
				break;
 
			case '3':
				system("cls");
				//Opcion 3.- Dividir 6 digitos
				cout << "Has elejido de 6 digitos\n";
				cout<<"Digite el numero: \n"; cin>>num;//Solicita el numero y lo almacena en num
				cout<<"\nEl numero Digitado es: \n"<<num;//Muestra el numero almacenado en num
				//Proceso de separacion
					dig=num%10;
					//Separacion primer digito
					v1=dig;
					num=num/10;
					dig=num%10;
					//Separacion segundo digito
					v2=dig;
					num=num/10;
					dig=num%10;
					//Separacion tercer digito
					v3=dig;
					num=num/10;
					dig=num%10;
					//Separacion cuarto digito
					v4=dig;
					num=num/10;
					dig=num%10;
					//Separacion quinto digito
					v5=dig;
					num=num/10;
					dig=num%10;
					//Separacion sexta digito
					v6=dig;
				//Impresion Resultado			
				cout<<"\nEl numero separado es: \n";//Imprime el resultado
				cout<<" "<<v6 <<" "<<v5 <<" "<<v4<<" "<<v3<<" "<<v2<<" "<<v1<<"\n\n";//Imprime el resultado separado por espacios
				pausa();
				break;
 
			case '4':
				system("cls");
				//Opcion 4.- Dividir 7 digitos
				cout << "Has elejido de 7 digitos\n";
				cout<<"Digite el numero: \n"; cin>>num;//Solicita el numero y lo almacena en num
				cout<<"\nEl numero Digitado es: \n"<<num;//Muestra el numero almacenado en num
				//Proceso de separacion
					dig=num%10;
					//Separacion primer digito
					v1=dig;
					num=num/10;
					dig=num%10;
					//Separacion segundo digito
					v2=dig;
					num=num/10;
					dig=num%10;
					//Separacion tercer digito
					v3=dig;
					num=num/10;
					dig=num%10;
					//Separacion cuarto digito
					v4=dig;
					num=num/10;
					dig=num%10;
					//Separacion quinto digito
					v5=dig;
					num=num/10;
					dig=num%10;
					//Separacion sexto digito
					v6=dig;
					num=num/10;
					dig=num%10;
					//Separacion septimo digito
					v7=dig;
				//Impresion Resultado			
				cout<<"\nEl numero separado es: \n";//Imprime el resultado
				cout<<" "<<v7<<" "<<v6 <<" "<<v5 <<" "<<v4<<" "<<v3<<" "<<v2<<" "<<v1<<"\n\n";//Imprime el resultado separado por espacios
				pausa();
				break;
			
			case '5':
				system("cls");
				//Opcion 6.- Dividir 8 digitos
				cout << "Has elejido de 8 digitos\n";
				cout<<"Digite el numero: \n"; cin>>num;//Solicita el numero y lo almacena en num
				cout<<"\nEl numero Digitado es: \n"<<num;//Muestra el numero almacenado en num
				//Proceso de separacion
					dig=num%10;
					//Separacion primer digito
					v1=dig;
					num=num/10;
					dig=num%10;
					//Separacion segundo digito
					v2=dig;
					num=num/10;
					dig=num%10;
					//Separacion tercer digito
					v3=dig;
					num=num/10;
					dig=num%10;
					//Separacion cuarto digito
					v4=dig;
					num=num/10;
					dig=num%10;
					//Separacion quinto digito
					v5=dig;
					num=num/10;
					dig=num%10;
					//Separacion sexto digito
					v6=dig;
					num=num/10;
					dig=num%10;
					//Separacion septimo digito
					v7=dig;
					num=num/10;
					dig=num%10;
					//Separacion ¿octavo digito
					v8=dig;
				//Impresion Resultado			
				cout<<"\nEl numero separado es: \n";//Imprime el resultado
				cout<<" "<<v8<<" "<<v7<<" "<<v6 <<" "<<v5 <<" "<<v4<<" "<<v3<<" "<<v2<<" "<<v1<<"\n\n";//Imprime el resultado separado por espacios
				pausa();
				break;
			
			case '6':
				system("cls");
				//Opcion 6.- Dividir 9 digitos
				cout << "Has elejido  9 digitos.\n";
				cout<<"Digite el numero: \n"; cin>>num;//Solicita el numero y lo almacena en num
				cout<<"\nEl numero Digitado es: \n"<<num;//Muestra el numero almacenado en num
				//Proceso de separacion
					dig=num%10;
					//Separacion primer digito
					v1=dig;
					num=num/10;
					dig=num%10;
					//Separacion segundo digito
					v2=dig;
					num=num/10;
					dig=num%10;
					//Separacion tercer digito
					v3=dig;
					num=num/10;
					dig=num%10;
					//Separacion cuarto digito
					v4=dig;
					num=num/10;
					dig=num%10;
					//Separacion quinto digito
					v5=dig;
					num=num/10;
					dig=num%10;
					//Separacion sexto digito
					v6=dig;
					num=num/10;
					dig=num%10;
					//Separacion septimo digito
					v7=dig;
					num=num/10;
					dig=num%10;
					//Separacion octavo digito
					v8=dig;
					num=num/10;
					dig=num%10;
					//Separacion noveno digito
					v9=dig;
				//Impresion Resultado			
				cout<<"\nEl numero separado es: \n";//Imprime el resultado
				cout<<" "<<v9<<" "<<v8<<" "<<v7<<" "<<v6 <<" "<<v5 <<" "<<v4<<" "<<v3<<" "<<v2<<" "<<v1<<"\n\n";//Imprime el resultado separado por espacios
				pausa();
				break;	
				
			case '7':
				//Opcion 7.- Cerrar Programa
				bandera=true;
				//exit(1);
				break;
 
			default:
				system("cls");
				//En caso de que la opcion no se valida se mostrara el siguiente mensaje:
				cout << "Opcion no valida.\a\n";
				pausa();
				break;
	
		}
    }
	while(bandera!=true);
 
    return 0;
}
 
void pausa()
{
    cout << "Pulsa una tecla para regresar al menu";
    getwchar();
}

