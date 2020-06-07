//Ejercicio Propuesto 25
/*
Problema 4.- Crea un programa en C++ donde el usuario 
pueda guardar el nombre de 5 alumnos, nombre y apellido, 
y después concatenar nombre y apellido en una tercer cadena. 
Imprima en pantalla los datos de los alumnos:

Número de alumno.
Nombre de alumno.
Apellido de alumno.
Nombre y apellido de alumno.
*/

#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char nombres[5][20] = {}, apellido[5][20] = {}, completo[5][40] = {};
	
	cout<<"Ingrese los nombres y apellidos de los alumnos"<<endl;
	for(int i = 0; i < 5; i++){
		cout<<"Nombre Alumno "<<i+1<<": >";
		cin.getline(nombres[i],20,'\n');
		cout<<"Apellido Alumno "<<i+1<<": >";
		cin.getline(apellido[i],20,'\n');
		cout<<endl;
	}
	
	for(int i = 0; i < 5; i++){
		strcat(completo[i],nombres[i]);
		strcat(completo[i], apellido[i]);
	}
	
	cout<<endl<<"Nombres de los alumnos"<<endl;
	for(int i = 0; i < 5; i++){
		cout<<"Alumno "<<i+1<<": "<<nombres[i];
		cout<<endl;
	}
	
	cout<<endl<<"Apellido de los alumnos"<<endl;
	for(int i = 0; i < 5; i++){
		cout<<"Alumno "<<i+1<<": "<<apellido[i];
		cout<<endl;
	}
	
	cout<<endl<<"Nombre y apellido de los alumnos"<<endl;
	for(int i = 0; i < 5; i++){
		cout<<"Alumno "<<i+1<<": "<<completo[i];
		cout<<endl;
	}
	
	return 0;
}
