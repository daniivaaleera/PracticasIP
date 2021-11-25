#include <iostream>

using namespace std;

void calcular (int &aa,int &ab,int &ac,int &ad, int &cont){
	ad = 3*ac - 2*aa;
	aa = ab;
	ab = ac;
	ac = ad;
	cont++;
	
}


int main (){
	int aa,ab,ac,an,ad,cont;
	cout << "Introduzca el numero a superar " << endl;
	cin >> an;
	cont = 2;
	aa = 1;
	ab = 2;
	ac = 3;
	while (ad <= an){
		calcular (aa,ab,ac,ad,cont);
	}
	cout << "El valor es: " << cont << endl;
	
	return 0;
}

//Programa realizado por Daniel Valera Tebas en 1º de Ingeniería Informática.
