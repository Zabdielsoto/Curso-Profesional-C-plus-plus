//Ejercicio 24
/*
Problema 3.- Crea un programa en C++ que pueda realizar lo siguiente:

Declarar una cadena al inicio.
Determinar la longitud de dicha cadena.
Con la longitud declarar otra cadena.
Pasar los datos de la cadena 1 a la cadena 2.
*/

#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char cadena[50] = "";
	int longuitud = 0;
	
	cout<<"Ingrese la palabra: >";
	cin.getline(cadena,50,'\n');
	
	longuitud = strlen(cadena);
	
	char cadena2[longuitud + 1] = "";
	
	strcpy(cadena2,cadena);
	
	cout<<endl<<"Longuit de la palabra: "<<longuitud<<endl;
	cout<<endl<<"Palabra en cadena 1: "<<cadena<<endl;
	cout<<endl<<"Palabra en cadena 2: "<<cadena2<<endl;
	
	return 0;
}
