//Ejercicio propuesto 8: if else

#include<iostream>

using namespace std;

int main(){
	int numero = 0;
	
	cout<<"Listado de Colores"<<endl<<"1.-Rojo"
		<<endl<<"2.-Verde"<<endl<<"Amarillo";
	
	cout<<endl<<"Seleccione un color: >";
	cin>>numero;
	
	if(numero == 1){
		cout<<endl<<"El color Rojo significa 'No pasar'";
	}
	else if(numero == 2){
		cout<<endl<<"El color Verde significa 'Adelante'";
	}
	else if(numero == 3){
		cout<<"El color Amarillo significa 'Precaucion'";
	}
	else {
		cout<<endl<<"ERROR, "<< numero <<" no tiene un color asignado";
	}
	
	return 0;
}
