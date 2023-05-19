#pragma once
#include <iostream>
using namespace std;

void cargar_matrices(int matriz[10][10], int segunda_matriz[10][10], int filas, int columnas, int segunda_filas, int segunda_columnas) {
	cout << "\nCargue su primer matriz: " << endl;
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			cout << "Digite un numero [" << i + 1 << "][" << j + 1 << "]: ";
			cin >> matriz[i][j];
		}
	}
	cout << "\nCargue su segunda matriz: " << endl;
	for (int i = 0; i < segunda_filas; i++) {
		for (int j = 0; j < segunda_columnas; j++) {
			cout << "Digite un numero [" << i + 1 << "][" << j + 1 << "]: ";
			cin >> segunda_matriz[i][j];
		}
	}
}

void mostrar_matrices(int matriz[10][10], int segunda_matriz[10][10], int filas, int columnas, int segunda_filas, int segunda_columnas) {
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
	for (int i = 0; i < segunda_filas; i++) {
		cout << "| ";
		for (int j = 0; j < segunda_columnas; j++) {
			cout << segunda_matriz[i][j] << " ";
		}
		cout << "|";
		cout << "\n";
	}
}

void sumar_matrices(int matriz[10][10], int segunda_matriz[10][10], int filas, int columnas, int segunda_filas, int segunda_columnas) {
	int matriz_sumada[10][10];
	if (filas == segunda_filas && columnas == segunda_columnas) {
		for (int i = 0; i < filas; i++) {
			for (int j = 0; j < columnas; j++) {
				matriz_sumada[i][j] = matriz[i][j] + segunda_matriz[i][j];
			}
		}
		cout << "\nSu matriz sumada es: " << endl;
		for (int i = 0; i < filas; i++) {
			cout << "| ";
			for (int j = 0; j < columnas; j++) {
				cout << matriz_sumada[i][j] << " ";
			}
			cout << "|";
			cout << "\n";
		}
	}
	else {
		cout << "\nNo se pueden sumar matrices de distinta dimension.";
	}
}

void restar_matrices(int matriz[10][10], int segunda_matriz[10][10], int filas, int columnas, int segunda_filas, int segunda_columnas) {
	int matriz_restada[10][10];
	if (filas == segunda_filas && columnas == segunda_columnas) {
		for (int i = 0; i < filas; i++) {
			for (int j = 0; j < columnas; j++) {
				matriz_restada[i][j] = matriz[i][j] - segunda_matriz[i][j];
			}
		}
		cout << "\nSu matriz restada es: " << endl;
		for (int i = 0; i < filas; i++) {
			cout << "| ";
			for (int j = 0; j < columnas; j++) {
				cout << matriz_restada[i][j] << " ";
			}
			cout << "|";
			cout << "\n";
		}
	}
}

void escalar_matriz(int matriz[10][10], int filas, int columnas) {
	int matriz_escalar[10][10];
	int escalar;
	cout << "\nIngrese el escalar por el cual desea multiplicar su primer matriz: ";
	cin >> escalar;

	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			matriz_escalar[i][j] = escalar * matriz[i][j];
		}
	}
	cout << "\nSu matriz multiplicada por " << escalar << " es: " << endl;
	for (int i = 0; i < filas; i++) {
		cout << "| ";
		for (int j = 0; j < columnas; j++) {
			cout << matriz_escalar[i][j] << " ";
		}
		cout << "|";
		cout << "\n";
	}
}

void escalar_segundamatriz(int segunda_matriz[10][10], int segunda_filas, int segunda_columnas) {
	int segundamatriz_escalar[10][10];
	int escalar;
	cout << "\nIngrese el escalar por el cual desea multiplicar su segunda matriz: ";
	cin >> escalar;

	for (int i = 0; i < segunda_filas; i++) {
		for (int j = 0; j < segunda_columnas; j++) {
			segundamatriz_escalar[i][j] = escalar * segunda_matriz[i][j];
		}
	}
	cout << "\nSu matriz multiplicada por " << escalar << " es: " << endl;
	for (int i = 0; i < segunda_filas; i++) {
		cout << "| ";
		for (int j = 0; j < segunda_columnas; j++) {
			cout << segundamatriz_escalar[i][j] << " ";
		}
		cout << "|";
		cout << "\n";
	}
}