#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//arreglo de enteros
	int edades[]={18,20,24,28,30,32};
	int *ptr;
	//se obtiene la direccion del primer elemento
	ptr=edades;
	
	//se imprime direcci�n y valor de esa direccion
	cout<<"Trabajo con enteros: "<< endl << endl;
	cout<<"La direcci�n del primer elemento es: "<< edades <<endl;
	cout<<"El valor del primer elemento es: "<< *edades << endl << endl;
	
	cout<<"La direcci�n del segundo elemento es: "<< edades+1 <<endl;
	cout<<"El valor del segundo elemento es: "<< *(edades+1) << endl << endl;
	
	cout<<"La direcci�n del tercer elemento es: "<< edades+2 <<endl;
	cout<<"El valor del tercer elemento es: "<< *(edades+2) << endl << endl;
	
	cout<<"La direcci�n del cuarto elemento es: "<< edades+3 <<endl;
	cout<<"El valor del cuarto elemento es: "<< *(edades+3) << endl << endl;
	
	cout<<"La direcci�n del quinto elemento es: "<< edades+4 <<endl;
	cout<<"El valor del quito elemento es: "<< *(edades+4) << endl << endl;
	
	cout<<"La direcci�n del sexto elemento es: "<< edades+5 <<endl;
	cout<<"El valor del sexto elemento es: "<< *(edades+5) << endl << endl;
	
	// se declara un arreglo de caracteres
	
	cout<< "Trabajo con cadenas:"<< endl << endl;
	char cadena[] = "Ciberseguridad";
	//Se obtiene la direccion del primer elemento
	char* ptrc=cadena;
	//se imprimen la direccion y el valor de esa direccion
	cout<<"La direcci�n del primer elemento es: "<< &ptrc <<endl;
	cout<<"El valor del primer elemento es: "<< *(ptrc) << endl << endl;
	
	cout<<"La direcci�n del segundo elemento es: "<< &ptrc+1 <<endl;
	cout<<"El valor del segundo elemento es: "<< *(ptrc+1) << endl << endl;
	
	cout<<"La direcci�n del tercer elemento es: "<< &ptrc+2 <<endl;
	cout<<"El valor del tercer elemento es: "<< *(ptrc+2) << endl << endl;
	
	cout<<"La direcci�n del cuarto elemento es: "<< &ptrc+3 <<endl;
	cout<<"El valor del cuarto elemento es: "<< *(ptrc+3) << endl << endl;
	
	cout<<"La direcci�n del quinto elemento es: "<< &ptrc+4 <<endl;
	cout<<"El valor del quinto elemento es: "<< *(ptrc+4) << endl << endl;
	

	
	
	return 0;
}

