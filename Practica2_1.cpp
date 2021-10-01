#include <iostream>

using namespace std;

int main (){
	char a,b,c,aux;
	cout << "Introduce 3 letras:" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	aux = b;
	b = c;
	c = a;
	a = aux;
	cout << "Tras el cambio, el orden de las letras es " << a << b << c << endl;
	return 0;
}

//Programa realizado por Daniel Valera Tebas en 1º de Ingeniería Informática.
