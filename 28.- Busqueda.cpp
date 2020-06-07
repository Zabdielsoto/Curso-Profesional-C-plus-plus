//Ejercicio 28: Busquedas
/*
>> Crea un programa en C++ que busque 
dentro de un arreglo desordenado cuantas 
veces se repite un número, si es que existe. 
El número lo puede elegir el usuario.
*/

#include<iostream>

using namespace std;

int main(){
	int lista[45] = {9,8,7,6,5,4,3,2,1,9,8,7,6,5,4,3,2,9,8,7,6,5,4,3,9,8,7,6,5,
				4,9,8,7,6,5,9,8,7,6,9,8,7,9,8,9}, i = 0, buscar = 0;
	char resultados[45] = {};
	
	for(int j = 0; j < 45; j++){
		resultados[i] = 'F';
	}
	
	cout<<"Ingrese numero a buscar cuantas veces se repite: >";
	cin>>buscar;
	
	//Algortimo de busqueda secuencial
	
	for(i = 0; i < 45; i++){
		if(lista[i] == buscar){
			resultados[i] = 'V';
		}
	}
	
	i = 0;
	
	for(int j = 0; j < 45; j++){
		if(resultados[j] == 'V'){
			cout<<"Se encontro el numero "<<buscar<<" en la posicion "
				<<j<<endl;
			i++;
		}
	}
	
	cout<<"El numero "<<buscar<<" se encontro "<<i<<" veces";
	
	return 0;
}
