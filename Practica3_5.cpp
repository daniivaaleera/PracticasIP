#include <iostream>

using namespace std;

int main (){
	int l1,l2,l3;
	cout << "Introduce 3 números, por favor" << endl;
	cin >> l1;
	cin >> l2;
	cin >> l3;
	if ((l1+l2<l3) || (l1+l3 < l2) || (l2+l3 < l1)){
		cout << "Estos 3 lados no pueden formar un triangulo" << endl;
	}
	else{
		if (l1==l2==l3){
			cout << "Estos tres lados pueden formar un triangulo equilatero" << endl;
		}
		else if ((l1==l2 && l3 != l1)||(l1==l3 && l1!=l2)||(l2==l3 && l2!=l1)){
			cout << "Estos tres lados pueden formar un triangulo isosceles" << endl;
		} 
		else if (l1 != l2 != l3){
			cout << "Estos tres lados pueden formar un triangulo escaleno" << endl;
		}
	}
return 0;
}

//Programa realizado por Daniel Valera Tebas en 1º de Ingeniería Informática.
