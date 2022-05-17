#include <iostream>
using namespace std;



const int N = 5; // Solo declaro una ya que como el numero de columnas es igual al de filas, la tabla sera cuadrada
typedef char columnas [N];
typedef char Palabra [N];
typedef char TableroWord [N][N];


int i,j;
int contador;
int cuentaletras;
Palabra Word,W1,W2;
TableroWord tabWord = {{'a','t','r','i','l'},{'l','a','p','i','z'},{'a','r','r','o','z'},{'p','e','l','o','s'},{'o','t','r','o','s'}};
int valor = -1;


int EstaPalabra(TableroWord tabWord, Palabra Word){
	for (i=0; i<N; i++){
		contador = 0;
		for (j=0;j<N;j++) {
			if ((Word[j]) == (tabWord [i][j])){
				contador++;}
			if (contador == N){
				valor = i; 
		}
	}
}
return valor;
}

int ContarLetrasCorrectas (Palabra W1, Palabra W2){
	cuentaletras = 0;
	for (j=0;j<N;j++){
		if (W1 [j] == W2 [j]){
			cuentaletras++;}
	}
	return cuentaletras;
}
			
			
int main () {
	cout << "Introduzca la palabra que desee comprobar si esta en el tablero." << endl;
	for (j=0;j<N;j++){
		cout << "Letra " << j+1 << ":" <<endl;
		cin >> Word[j];
	}
	
	EstaPalabra(tabWord,Word);
	cout << valor << endl;
	
	
	cout << "Introduzca las dos palabras de las que desea comprobar el numero de letras coincidentes" << endl;
	
	for (j=0;j<N;j++){
		cout << "Letra " << j+1 << " de la palabra 1:" << endl;
		cin >> W1[j];
	}
	
	for (j=0;j<N;j++){
		cout << "Letra " << j+1 << " de la palabra 2:" << endl;
		cin >> W2[j];
	}
	
	ContarLetrasCorrectas(W1,W2);
	cout << cuentaletras;
	
	return 0;
	
	
	
}
