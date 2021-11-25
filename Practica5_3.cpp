#include <iostream>

using namespace std;

void division (int &a, int &b, int &c, int &r){
	a = a-b;
	c = c+1;
	r = a;
}
int main (){
	int a,b,c,r;
	c = 0;
	cout << "Introduzca el numero a dividir: " << endl;
	cin >> a;
	cout << "Introduzca el divisor: " << endl;
	cin >> b;
	while (a>=b){
		division(a,b,c,r);
		r = a;
	}
	cout << "El resultado de la division es " << c << " y el resto es " << r << endl;
	
	return 0;
	
}

//Programa realizado por Daniel Valera Tebas en 1º de Ingeniería Informática.
