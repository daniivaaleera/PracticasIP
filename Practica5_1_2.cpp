#include <iostream>

using namespace std;

int main () {
	const float limite = 5.0;
	float suma;
	int cuenta;
	cuenta = 0;
	suma = 0.0;
	while (suma <= limite){
		cuenta = cuenta + 1;
		suma = suma + 1.0/cuenta;
	}
	cout << "El numero de terminos es: " << cuenta << endl;
	
	return 0;
}

//Programa realizado por Daniel Valera Tebas en 1º de Ingeniería Informática.

