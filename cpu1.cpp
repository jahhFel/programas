#include<ctime>
#include<math.h>
#include <iostream>
using namespace std;
void mostrarTiempo(clock_t);

int main(int argc, char *argv[]) {
	clock_t tiempo=clock();
	long long i=0;
	double sum=0;
	for (i=1; i<1000000000;i++){
		sum=sum+ log(double(i));
	}
	mostrarTiempo(tiempo);
	cout<<"Pulse para salir...";
	cin.get();
	
	return 0;
}

void mostrarTiempo(clock_t tiempo){
	tiempo=clock()-tiempo;
	cout<<endl<<"Tiempo de ejecucion es "<<double(tiempo)/CLOCKS_PER_SEC<<" seg."<<endl;
}

