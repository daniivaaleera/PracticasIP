#include <iostream>

using namespace std;

int main (){
	int cantidad, resto, b500,b100,b50,b20,b10,b5;
	cout << "Introduce una cantidad: ";
	cin >> cantidad;
	b500 = cantidad/500;
	resto = cantidad%500;
	b100 = resto/100;
	resto = resto%100;
	b50 = resto/50;
	resto = resto%50;
	b20 = resto/20;
	resto = resto%20;
	b10 = resto/10;
	resto = resto%10;
	b5 = resto/5;
	resto = resto%5;
	cout << "Tenemos " << b500 << " billetes de 500, " << b100 << " billetes de 100, " << b50 << " billetes de 50, " << b20 << " billetes de 20, " << b10 << " billetes de 10, " << b5 << " billetes de 5 y " << resto << " en monedas.";
	return 0;
}

//Programa realizado por Daniel Valera Tebas en 1º de Ingeniería Informática.
