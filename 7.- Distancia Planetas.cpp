//Ejercicio propuesto 1: sentencia if

#include<iostream>

using namespace std;

int main(){
	int numero = 0;
	
	cout<<"Listado de Planetas"<<endl;
	cout<<"1.-Mercurio"<<endl<<"2.-Venus"<<endl<<"3.-Tierra"<<endl
		<<"4.-Marte"<<endl<<"5.-Jupiter"<<endl<<"6.-Saturno"<<endl
		<<"7.-Urano"<<endl<<"8.-Neptuno"<<endl;
	
	cout<<endl<<"Seleccione un planeta: >";
	cin>>numero;
	
	if(numero == 1){
		cout<<endl<<"La distancia media al sol de Mercurio es de 59km";
	}
	else if(numero == 2){
		cout<<endl<<"La distancia media al sol de Venus es de 108km";
	}
	else if(numero == 3){
		cout<<endl<<"La distancia media al sol de la Tierra es de 150km";
	}
	else if(numero == 4){
		cout<<endl<<"La distancia media al sol de Marte es de 228km";
	}
	else if(numero == 5){
		cout<<endl<<"La distancia media al sol de Jupiter es de 750km";
	} 
	else if(numero == 6){
		cout<<endl<<"La distancia media al sol de Saturno es de 1431km";
	}
	else if(numero == 7){
		cout<<endl<<"La distancia media al sol de Urano es de 2877km";
	}
	else if(numero == 8){
		cout<<endl<<"La distancia media al sol de Neptuno es de 4509km";
	}
	else {
		cout<<endl<<"ERROR: "<<numero<<" no esta asociado a ningun planeta";
	}
	
	return 0;
}
