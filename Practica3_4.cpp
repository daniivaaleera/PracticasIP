#include <iostream>

using namespace std;

int main (){
	char operador;
	int operando1;
	int operando2;
	cout << "Introduce los dos numeros con los que deseas operar" << endl;
	cin >> operando1;
	cin >> operando2;
	cout << "Que operacion deseas llevar a cabo?" << endl;
	cin >> operador;
	if (operador == *){
		cout << operando1 << operador << operando2 << "=" << operando1*operando2 << endl;
	else if (operador == "/"){
		cout << operando1 << operador << operando2 << "/" << operando1/operando2 << endl;
	else if (operador == "+"){
		cout << operando1 << operador << operando2 << "+" << operando1/operando2 << endl;
		else if (operador == "-"){
		cout << operando1 << operador << operando2 << "-" << operando1/operando2 << endl;
	return 0;
}

//aun trabajando en el codigo, no funciona, arreglar ASAP
