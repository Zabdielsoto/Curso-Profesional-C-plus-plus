//Ejercicio 23
/*
Problema 2.- Crea un programa en C++ que determine 
si una palabra ingresada por el usuario es palíndromo. 
Palíndromo es una palabra o expresión que es igual si 
se lee de izquierda a derecha que de derecha a izquierda. 
Ejemplos: arenera, arepera, anilina, etc.
*/

#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char palabra[20] = "";
	int longuitud = 0;
	
		cout<<"Ingrese la palabra para determinar si es palindroma: >";
		cin.getline(palabra,20,'\n');
		
		longuitud = strlen(palabra);
		
		char palindromo[longuitud + 1] = "";
		
		strcpy(palindromo,palabra);
		strrev(palindromo);
		
		if(strcmp(palabra,palindromo) == 0){
			cout<<endl<<palabra<<" es un palindromo";
		} else {
			cout<<endl<<palabra<<" no es un palindromo";
		}
	
	return 0;
}
