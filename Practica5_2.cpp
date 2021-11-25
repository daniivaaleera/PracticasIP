#include <iostream>

using namespace std;

void codificar (char &c){
	if((c >= 'a' && c <'z') || (c >= 'A' && c < 'Z') || (c >= '0'&& c < '9')){
		c++;}
	else if(c == 'z'){
		c = 'a';}
	else if(c == 'Z'){
		c = 'A';}
	else if(c == '9'){
		c = '0';}
	else{
		c = '*';}
	cout << c;
}
int main() {
	char c;
	cout << "Introduzca la frase a codificar: " << endl;
	cin.get(c);
	cout << "La frase codificada es: " << endl;
	while (c != '\n'){
		codificar(c);
		cin.get(c);
	}
	
	return 0;

}

//Programa realizado por Daniel Valera Tebas en 1º de Ingeniería Informática.
