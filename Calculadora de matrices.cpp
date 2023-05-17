/*
	Calculadora de matrices - Parcial 2 Introduccion a la programacion
*/

#include <iostream>
using namespace std;

void cargar_matrices(int matriz[10][10], int segunda_matriz[10][10], int filas, int columnas) {
	cout << "\nCargue su primer matriz: " << endl;
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			cout << "Digite un numero [" << i + 1 << "][" << j + 1 << "]: ";
			cin >> matriz[i][j];
		}
	}
	cout << "\nCargue su segunda matriz: " << endl;
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			cout << "Digite un numero [" << i + 1 << "][" << j + 1 << "]: ";
			cin >> segunda_matriz[i][j];
		}
	}
}

void mostrar_matrices(int matriz[10][10], int segunda_matriz[10][10], int filas, int columnas) {
	cout << "\nSu primera matriz ingresada es: " << endl;
	for (int i = 0; i < filas; i++) {
		cout << "| ";
		for (int j = 0; j < columnas; j++) {
			cout << matriz[i][j] << " ";
		}
		cout << "|";
		cout << "\n";
	}
	cout << "\nSu segunda matriz ingresada es: " << endl;
	for (int i = 0; i < filas; i++) {
		cout << "| ";
		for (int j = 0; j < columnas; j++) {
			cout << segunda_matriz[i][j] << " ";
		}
		cout << "|";
		cout << "\n";
	}
}

int main() {

	int matriz[10][10];
	int segunda_matriz[10][10];
	int filas, columnas;

	cout << "Ingrese la cantidad de FILAS que va a tener su matriz: ";
	cin >> filas;
	cout << "Ingrese la cantidad de COLUMNAS que va a tener su matriz: ";
	cin >> columnas;

	cargar_matrices(matriz, segunda_matriz, filas, columnas);
	mostrar_matrices(matriz, segunda_matriz, filas, columnas);

	return 0;
}









