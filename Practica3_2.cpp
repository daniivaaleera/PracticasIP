 #include <iostream>
 
 using namespace std;
 
 int main () {
	int cantidadPrestada;
	int numeroMeses;
	float interesMensual;
	char respuesta;
	bool clienteRiesgo;
	cout << "Bienvenido a la calculadora de prestamos de tu banco. Introduce la cantidad solicitada, por favor" << endl;
	cin >> cantidadPrestada;
	cout << "Cual es el interes mensual de tu prestamo?" << endl;
	cin >> interesMensual;
	cout << "Cuantos meses durara tu prestamo?" << endl;
	cin >> numeroMeses;
	cout << "Tienes alguna otra deuda con el banco? Escribe S si tienes, y N si no tienes." << endl;
	cin >> respuesta;
	while (respuesta not_eq 'S' && respuesta not_eq 'N') {
		cout << "Por favor, introduce un caracter valido" << endl;
		cin >> respuesta;
	}
	if (respuesta == 'S'){
		cout << "Teniendo en cuenta que eres un cliente de riesgo, tu total mensual a devolver es: " << cantidadPrestada + cantidadPrestada*interesMensual*numeroMeses + cantidadPrestada*0.01 << endl;
	}
	else if (respuesta == 'N') {
		cout << "Tu total mensual a devolver es: " << cantidadPrestada + cantidadPrestada*interesMensual*numeroMeses << endl;
	}
	return 0;
}

//Programa realizado por Daniel Valera Tebas en 1º de Ingeniería Informática.
