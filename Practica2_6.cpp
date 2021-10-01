#include <iostream>

using namespace std;

int main () {
	int numeroCerdos,caja50,caja25,caja5,caja1,aux;
	cout << "Introduzca el numero de cerdos a repartir. " << endl;
	cin >> numeroCerdos;
	caja50 = numeroCerdos/50;
	aux = numeroCerdos%50;
	caja25 = aux/25;
	aux = aux%25;
	caja5 = aux/5;
	caja1 = aux%5;
	cout << "El numero de cajas necesarias de cada tamaño es: " << caja50 << " cajas de 50 cerdos, " << caja25 << " cajas de 25 cerdos, " << caja5 << " cajas de 5 cerdos y " << caja1 << " cajas de 1 cerdo." << endl;
	return 0;
}

//Programa realizado por Daniel Valera Tebas en 1º de Ingeniería Informática.
	
