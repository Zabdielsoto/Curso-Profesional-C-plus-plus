//Ejercicio Propuesto 10: Ciclo while y do while
/*
1.- Ingresar el ultimo término de la serie mostrado a continuación: 2, 4, 6, 8,10,….., n; mostrar la suma total de
 la serie completa en la pantalla.

2.- Visualice los números del 1 al 10.

3.- Mostrar en pantalla la tabla del 6.
*/

#include<iostream>

using namespace std;

int main(){
	int numero = 0, contador = 1, suma = 0;
	
	//Ejercicio 1
	cout<<"***** Ejercicio 1 *****"<<endl<<endl;
	cout<<"Ingrese el ultimo numero de la serie: >";
	cin>>numero; cout<<endl;
	
	do{
		if(contador%2 == 0){
			if(contador < numero){
				cout<<contador<<", ";
			} else {
				cout<<contador;
			}
			
			suma += contador;
		}
		
		contador++;
	} while (contador <= numero);
	
	cout<<endl<<endl<<"La suma total de la serie es: "<<suma<<endl<<endl;
	
	//Ejercicio 2
	cout<<"***** Ejercicio 2 *****"<<endl<<endl;
	numero = 1;
	while(numero <= 100){
		if(numero < 100){
			cout<<numero<<", ";
		} else {
			cout<<numero<<endl<<endl;
		}
		
		numero++;
	}
	
	//Ejercicio 3
	cout<<"***** Ejercicio 3 *****"<<endl<<endl;
	numero = 0;
	while (numero <= 10){
		cout<<numero<<" * 6 = "<<numero * 6<<endl;
		numero ++;
	}
	
	return 0;
}
