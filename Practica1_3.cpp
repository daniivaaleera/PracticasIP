#include <iostream>

using namespace std;

int main () {
	
	float notaTeoria;
	float notaPractica;
	float notaFinal;
	cout << "Introduce la nota de teor�a y la de pr�cticas: ";
	cin >> notaTeoria >> notaPractica;
	notaFinal = notaTeoria * 0.7 + notaPractica * 0.3;
	cout << notaFinal << endl;
	return 0;
}

//Programa realizado por Daniel Valera Tebas en 1� de Ingenier�a Inform�tica.
