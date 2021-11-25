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
	cout << "Introduzca el termino a calcular: " << endl;
	cin >> an;
	cont = 2;
	aa = 1;
	ab = 2;
	ac = 3;
	while (cont != an){
		calcular (aa,ab,ac,ad,cont);
	}
	cout << "El valor es: " << ad << endl;
	
	return 0;
}

//Programa realizado por Daniel Valera Tebas en 1º de Ingeniería Informática.
