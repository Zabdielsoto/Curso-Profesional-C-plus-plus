//Ejercicio Propuesto 11: Arreglos
/*
 1.- Crea un programa en C++ donde el usuario ingrese 10 números,
después todos estos se deben de almacenar en un array para finalmente
mostrar en pantalla la suma, resta, multiplicación y división de todos los elementos.
*/
#include<iostream>

using namespace std;

int main(){
	float arreglo[10] = {}, suma = 0, multiplicacion = 1, resta = 0, division = 1;
	
	cout<<"Ingrese 10 numeros"<<endl;
	for(int i = 0; i <= 9; i++){
		cout<<"Numero "<<i+1<<": ";
		cin>>arreglo[i];
		
		suma += arreglo[i];
		resta -= arreglo[i];
		multiplicacion *= arreglo[i];
		division /= arreglo[i];
	}
	cout<<endl<<"La suma de los numeros del arreglo es de: "<<suma<<endl
		<<"La resta de los numeros del arreglo es de: "<<resta<<endl
		<<"La multiplicacion de los numeros del arreglo es de: "<<multiplicacion<<endl
		<<"La division de los numeros del arreglo es de: "<<division;
		
		return 0;
}
