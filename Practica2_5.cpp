#include <iostream>

using namespace std;

int main () {
	float notaExamen;
	float notaTrabajo;
	float notaTest;
	cout << "Introduzca las notas del examen, trabajo y test del alumno, por favor." << endl;
	cin >> notaExamen;
	cin >> notaTrabajo;
	cin >> notaTest;
	notaExamen = notaExamen * 0.5;
	notaTrabajo = notaTrabajo * 0.3;
	notaTest = notaTest * 0.2;
	cout << "La nota final del alumno es: " << notaExamen + notaTrabajo + notaTest << endl;
	return 0;
}

//Programa realizado por Daniel Valera Tebas en 1º de Ingeniería Informática.	
