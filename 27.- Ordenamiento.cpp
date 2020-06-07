//Ejercicio 27: Ordenamientos
/*
2.- Crea un programa que guarde las nota y nombres 
de 10 alumnos en una matriz, y muestre las notas de 
mayor a menor junto con el nombre correcto del alumno.
*/

#include<iostream>
#include<string.h>

using namespace std;

int main(){
	int minimo = 0;
	float notas[10] = {}, aux = 0;
	char nombres[10][20] = {}, auxiliar[20] = "";
	
	cout<<"Ingrese los nombres de los 10 alumnos"<<endl;
	for(int i = 0; i < 10; i++){
		cout<<"Alumno "<<i+1<<".- ";
		cin.getline(nombres[i],20,'\n');
	}
	
	cout<<endl<<"Ingrese las notas de los 10 alumnos"<<endl;
	for(int i = 0; i < 10; i++){
		cout<<nombres[i]<<": >";
		cin>>notas[i];
	}
	
	for(int i = 0; i < 10; i++){
		minimo = i;
		for(int j = i + 1; j < 10; j++){
			if(notas[j] > notas[minimo]){
				minimo = j;
			}
		}
		aux = notas[minimo];
		strcpy(auxiliar,nombres[minimo]);
		notas[minimo] = notas[i];
		strcpy(nombres[minimo],nombres[i]);
		notas[i] = aux;
		strcpy(nombres[i],auxiliar);
	}
	
	cout<<endl<<"Alumnos ordenados de mayor a menor segun sus notas"<<endl;
	for(int i = 0; i < 10; i++){
		cout<<nombres[i]<<": "<<notas[i]<<endl;
	}
	return 0;
}
