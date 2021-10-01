#include <iostream>

using namespace std;

int main (){
	int binario1,binario2,binario3,binario4,binarioTotal;
	cout << "Introduce los 4 valores de tu numero binario: " <<endl;
	cin >> binario1;
	cin >> binario2;
	cin >> binario3;
	cin >> binario4;
	
	binario1 = binario1 * 8;
	binario2 = binario2 * 4;
	binario3 = binario3 * 2;
	binario4 = binario4 * 1;
	cout << "Tu numero en base 10 es: " << binario1 + binario2 + binario3 + binario4 << endl;
	return 0;
}

//Programa realizado por Daniel Valera Tebas en 1º de Ingeniería Informática.
