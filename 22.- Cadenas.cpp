//Ejercicio 22: Cadenas
/*
Problema 1.- Crea un programa en C++ donde el usuario 
pueda introducir el abecedario en una cadena 
(en minúsculas), para después pasar los datos a otra 
cadena, y posteriormente pasar a mayúsculas el 
abecedario de la segunda cadena. Imprima todo en 
pantalla. (Al final tendremos dos cadenas, una con el 
abecedario en minúsculas y otro en mayúsculas).
*/

#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char mayusculas[28] = "", minusculas[28] = "";
	
	cout<<"Introduzca el abecedario: >";
	cin.getline(minusculas,28,'\n');
	
	strlwr(minusculas);
	strcpy(mayusculas,minusculas);
	strupr(mayusculas);
	
	cout<<endl<<"Alfabeto en minusculas"<<endl<<minusculas;
	cout<<endl<<endl<<"Alfabeto en mayusculas"<<endl<<mayusculas;
	
	return 0;
}
