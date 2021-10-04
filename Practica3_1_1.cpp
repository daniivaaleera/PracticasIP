#include <iostream>

using namespace std;

int main () {
	int nota;
	cout << "Introduce tu nota: " << endl;
	cin >> nota;
	if (nota == 20){
		cout << "Es una matrícula de honor" << endl;}
	else if ((nota == 19) || (nota == 18)) {
		cout << "Es un sobresaliente" << endl;}
	else if ((nota == 17) || (nota == 16)) {
		cout << "Es un notable" << endl;}
	else if ((nota == 15) || (nota == 14)) {
		cout << "Es un aprobado" << endl;}
	else {
		cout << "Es un suspenso" << endl;}
return 0;
}

//Programa realizado por Daniel Valera Tebas en 1º de Ingeniería Informática.
