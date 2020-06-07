//Ejercicio 29: Busquedas
/*
Crea un programa en C++ que busque un 
número dentro de un arreglo ordenado del 
1 al 12 y menciona que mes le corresponde. 
Ejemplo; 1 = Enero, 2 = Febrero. Utiliza 
tu lógica y lo aprendido anteriormente para imprimir.
*/

#include<iostream>
#include<string.h>

using namespace std;

int main(){
	int numero[12] = {1,2,3,4,5,6,7,8,9,10,11,12}, inferior = 0, centro = 0,
		superior = 0, buscar = 0;
	char bandera = 'V', meses[12][20] = {"Enero", "Febrero", "Marzo","Abril",
						"Mayo","Junio", "Julio", "Agosto", "Septiembre", 
						"Octubre", "Noviembre", "Diciembre"};
	
	cout<<"Ingrese numero de mes a buscar: >";
	cin>>buscar;
	
	inferior = 0;
	superior = 11;
	
	while(inferior <= superior){
		
		centro = (inferior + superior) / 2;
		
		if(numero[centro] == buscar){
			bandera = 'V';
			break;
		} else if(numero[centro] > buscar){
			superior = centro - 1;
		} else{
			inferior = centro + 1;
		}
	}
	
	if(bandera == 'V'){
		cout<<endl<<"El numero correponde al mes "<<meses[centro];
	} else {
		cout<<endl<<"El numero no correponde a ningun mes";
	}
	
	return 0;
}
