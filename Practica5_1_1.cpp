#include <iostream>

using namespace std;

int main (){
	int cont;
	char c;
	cont = 0;
	cin.get(c);
	do {
		if (c == ' '){
			cont = cont + 1;
		}
		cin.get(c);
	} while (c != '\n');
	cout << "El numero de blancos es: " << cont << endl;
	
	return 0;
}

//Programa realizado por Daniel Valera Tebas en 1º de Ingeniería Informática.

