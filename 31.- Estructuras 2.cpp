//Ejercicio Propuesto 31: Estructuras
/*
2.- Un programa que sea capaz de almacenar 
los datos de 50 personas: nombre, dirección, 
teléfono, edad (usando una tabla de structs). 
Deberá ir pidiendo los datos uno por uno. 
Después deberá aparecer un menú que permita:

>> Mostrar la lista de todos los nombres.

>> Mostrar las personas de una cierta edad.

>> Mostrar las personas cuya inicial sea la 
que el usuario indique.

>> Salir del programa (lógicamente, este menú 
debe repetirse hasta que se escoja la opción de “salir”).
*/

/*En este caso se hara solo con 5 personas, despues se puede modificar
el tamaño de los arreglos y de los ciclos for para que sea
para la cantidad de personas que se desee*/
#include<iostream>
#include<string.h>

using namespace std;

struct persona{
	char nombre[20], apellido[20], direccion[50];
	int edad, telefono;
};

int main(){
	persona p[5];
	
	cout<<"Registro de las personas"<<endl;
	for(int i = 0; i < 5; i++){
		fflush(stdin);
		cout<<"Registro "<<i+1<<endl;
		cout<<"Nombre: >";
		cin.getline(p[i].nombre,20);
		cout<<"Apellido: >";
		cin.getline(p[i].apellido,20);
		cout<<"Edad: >";
		cin>>p[i].edad;
		cout<<"Telefono: >";
		cin>>p[i].telefono;
		fflush(stdin);
		cout<<"Direccion: >";
		cin.getline(p[i].direccion,50);
		cout<<endl;
	}
	
	char continuar = 'S', inicial = ' ';
	int opcion = 0, buscar = 0, j = 0;
	do{
		cout<<endl<<"Opciones del Menu"<<endl
			<<"1.- Mostrar la lista de todas las personas"<<endl
			<<"2.- Mostrar las personas de una cierta edad"<<endl
			<<"3.- Mostrar las personas cuya inicial sea la que se "
			<<"indique"<<endl
			<<"4.- Salir del programa"<<endl
			<<"Ingrese la opcion deseada: >";
		cin>>opcion;
		
		switch(opcion){
			case 1:
				cout<<endl<<"Opcion 1: Lista de todas las personas"<<endl
					<<endl;
				
				for(int i = 0; i < 5; i++){
					cout<<endl<<"Registro 1"<<endl
						<<"Nombre: "<<p[i].nombre<<endl
						<<"Apellido: "<<p[i].apellido<<endl
						<<"Edad: "<<p[i].edad<<endl
						<<"Telefono: "<<p[i].telefono<<endl
						<<"Direccion: "<<p[i].direccion<<endl<<endl;
				}
				break;
			case 2:
				cout<<endl<<"Opcion 2: Lista de personas de cierta edad"
					<<endl
					<<"Ingrese la edad a buscar: >";
				cin>>buscar;
				
				//Busqueda Secuencial
				for(int i = 0; i < 5; i++){
					if(p[i].edad == buscar){
						cout<<endl<<"Registro "<<i+1<<endl
							<<"Nombre: "<<p[i].nombre<<endl
							<<"Apellido: "<<p[i].apellido<<endl
							<<"Edad: "<<p[i].edad<<endl
							<<"Telefono: "<<p[i].telefono<<endl
							<<"Direccion: "<<p[i].direccion<<endl<<endl;
						j++;
					}
				}
				if(j == 0){
					cout<<endl<<"No se encontraron registros"<<endl;
				}
				j = 0;
				break;
			case 3:
				cout<<endl<<"Opcion 3: Personas cuya incial sea la "
					<<"indicada"<<endl
					<<"Ingrese la inicial a buscar: >";
				cin>>inicial;
				
				//Busqueda Secuencial
				for(int i = 0; i < 5; i++){
					if(p[i].nombre[0] == inicial ){
						cout<<endl<<"Registro "<<i+1<<endl
							<<"Nombre: "<<p[i].nombre<<endl
							<<"Apellido: "<<p[i].apellido<<endl
							<<"Edad: "<<p[i].edad<<endl
							<<"Telefono: "<<p[i].telefono<<endl
							<<"Direccion: "<<p[i].direccion<<endl<<endl;
						j++;
					}	
				}
				if(j == 0){
					cout<<endl<<"No se encontraron registros"<<endl;
				}
				j = 0;
				break;
			case 4:
				continuar = 'f';
				break;
			default: cout<<endl<<"Opcion Inexistente"<<endl<<endl;
		}
		
	} while(continuar == 'S' || continuar == 's');
	return 0;
}
