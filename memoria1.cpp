#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int var =5;
	//declarar la variable del puntero
	int*pointVar;
	//almacena la dirección de var
	//&es para obtener la dirección de memoria y * para el dato
	pointVar=&var;
	//imprime el valor de var
	cout<<"var ="<<var<<endl;
	//imprime la direccion de var
	cout<<"Dirección de la variable var (&var) ="<<&var<<endl<<endl;
	//imprime el apuntador de pointvar 
	cout<<"Apuntador pointVar="<<pointVar<<endl<<endl;
	//cambia valaores
	cout<<"Cambia el valor de var a 7: "<<endl<<endl;
	var=7;
	cout<<"var ="<<var<<endl;
	cout<<"pointVar = "<<*pointVar<<endl<<endl;
	cout<<"Cambia el valor de *pointVar a 16:"<<endl;
	*pointVar=16;
	cout<<"var ="<<var<<endl<<endl;
	cout<<"Apuntador pointVar="<<pointVar<<endl;
	cout<<"*pointVar ="<<*pointVar<<endl;
	cout<<"var ="<<var<<endl<<endl;
	return 0;
}

