#include <iostream>

using namespace std;

int main (){
	char operador;
	int operando1;
	int operando2;
	cout << "Introduce los dos numeros con los que deseas operar" << endl;
	cin >> operando1;
	cin >> operando2;
	cout << "Que operacion deseas llevar a cabo, sumar, restar, multiplicar o dividir?" << endl;
	cin >> operador;
	switch(operador){
		case '+':
			cout << "El resultado es: " << operando1+operando2 << endl;
			break;
		case '-':
			cout << "El resultado es: " << operando1-operando2 << endl;
			break;
		case '*':
			cout << "El resultado es: " << operando1*operando2 << endl;
			break;
		case '/':
			cout << "El resultado es: " << operando1/operando2 << endl;
			break;
return 0;
}
}

//Programa realizado por Daniel Valera Tebas en 1º de Ingeniería Informática.
