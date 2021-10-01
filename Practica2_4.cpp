#include <iostream>

using namespace std;

int main () {
	float kilometros;
	float litrosCombustible;
	float costeMantenimiento;
	float costeCombustible;
	cout << "Bienvenido a la calculadora de contabilidad de JetLag. Introduzca el precio del combustible (por litro) para el vuelo a realizar: ";
	cin >> costeCombustible;
	cout << "Muchas gracias, ahora por favor, introduzca el coste de mantenimiento del avion (por km) a estudiar: ";
	cin >> costeMantenimiento;
	cout << "Escriba la distancia recorrida (en km): ";
	cin >> kilometros;
	cout << "Introduzca el consumo total (en litros): ";
	cin >> litrosCombustible;
	cout << "El coste total del viaje ha sido: " << (kilometros * costeMantenimiento) + (litrosCombustible * costeCombustible) << " euros" << endl;
	return 0;
}

//Programa realizado por Daniel Valera Tebas en 1º de Ingeniería Informática.
