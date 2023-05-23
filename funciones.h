#pragma once
#include <iostream>
using namespace std;

void cargar_primer_matriz(int matriz[10][10], int filas, int columnas) {
	cout << "\nCargue su primer matriz: " << endl;
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			cout << "Digite un numero [" << i + 1 << "][" << j + 1 << "]: ";
			cin >> matriz[i][j];
		}
	}
}

void cargar_segunda_matriz(int segunda_matriz[10][10], int segunda_filas, int segunda_columnas) {
	cout << "\nCargue su segunda matriz: " << endl;
	for (int i = 0; i < segunda_filas; i++) {
		for (int j = 0; j < segunda_columnas; j++) {
			cout << "Digite un numero [" << i + 1 << "][" << j + 1 << "]: ";
			cin >> segunda_matriz[i][j];
		}
	}
}

void mostrar_primer_matriz(int matriz[10][10], int filas, int columnas) {
	cout << "\nSu primera matriz ingresada es: " << endl;
	for (int i = 0; i < filas; i++) {
		cout << "| ";
		for (int j = 0; j < columnas; j++) {
			cout << matriz[i][j] << " ";
		}
		cout << "|";
		cout << "\n";
	}
}

void mostrar_segunda_matriz(int segunda_matriz[10][10], int segunda_filas, int segunda_columnas) {
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

void sumar(int matriz[10][10], int segunda_matriz[10][10], int filas, int columnas, int segunda_filas, int segunda_columnas) {
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

void restar(int matriz[10][10], int segunda_matriz[10][10], int filas, int columnas, int segunda_filas, int segunda_columnas) {
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

void escalar() {
	int matriz_escalar[10][10];
	int escalar, filasesc, columnasesc;

	cout << "FILAS de su matriz: ";
	cin >> filasesc;
	cout << "COLUMNAS de su matriz: ";
	cin >> columnasesc;

	cout << "\nCargue la matriz: " << endl;
	for (int i = 0; i < filasesc; i++) {
		for (int j = 0; j < columnasesc; j++) {
			cout << "Digite un numero [" << i + 1 << "][" << j + 1 << "]: ";
			cin >> matriz_escalar[i][j];
		}
	}
	cout << "\nIngrese el escalar por el cual desea multiplicar la matriz: ";
	cin >> escalar;
	for (int i = 0; i < filasesc; i++) {
		for (int j = 0; j < columnasesc; j++) {
			matriz_escalar[i][j] = escalar * matriz_escalar[i][j];
		}
	}
	cout << "\nSu matriz multiplicada por " << escalar << " es: " << endl;
	for (int i = 0; i < filasesc; i++) {
		cout << "| ";
		for (int j = 0; j < columnasesc; j++) {
			cout << matriz_escalar[i][j] << " ";
		}
		cout << "|";
		cout << "\n";
	}
}

void matriz_inversa(int matriz[10][10], int filas, int columnas, int segunda_filas, int segunda_columnas) {
	float matrizcofactores[3][3];
	float matrizadjunta[3][3];
	int inversa[3][3];

	cout << "\nCargue su matriz: " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "Digite un numero [" << i + 1 << "][" << j + 1 << "]: ";
			cin >> matriz[i][j];
		}
	}

	//matriz de cofactores
	matrizcofactores[0][0] = (matriz[1][1] * matriz[2][2]) - (matriz[1][2] * matriz[2][1]);
	matrizcofactores[0][1] = -((matriz[1][0] * matriz[2][2]) - (matriz[1][2] * matriz[2][0]));
	matrizcofactores[0][2] = (matriz[1][0] * matriz[2][1]) - (matriz[1][1] * matriz[2][0]);

	matrizcofactores[1][0] = -((matriz[0][1] * matriz[2][2]) - (matriz[0][2] * matriz[2][1]));
	matrizcofactores[1][1] = (matriz[0][0] * matriz[2][2]) - (matriz[0][2] * matriz[2][0]);
	matrizcofactores[1][2] = -((matriz[0][0] * matriz[2][1]) - (matriz[0][1] * matriz[2][0]));

	matrizcofactores[2][0] = (matriz[0][1] * matriz[1][2]) - (matriz[0][2] * matriz[1][1]);
	matrizcofactores[2][1] = -((matriz[0][0] * matriz[1][2]) - (matriz[0][2] * matriz[1][0]));
	matrizcofactores[2][2] = (matriz[0][0] * matriz[1][1]) - (matriz[0][1] * matriz[1][0]);


	//matriz adjunta (es la transpuesta de la matriz cofactores)
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			matrizadjunta[i][j] = matrizcofactores[j][i];
		}
	}
	cout << endl;

	//determinante por sarrus

	float determinante = 0;

	float diagonal_principal = (matriz[0][0] * matriz[1][1] * matriz[2][2]) +
		(matriz[1][0] * matriz[2][1] * matriz[0][2]) +
		(matriz[2][0] * matriz[0][1] * matriz[1][2]);

	float diagonal_secundaria = (matriz[0][2] * matriz[1][1] * matriz[2][0]) +
		(matriz[1][2] * matriz[2][1] * matriz[0][0]) +
		(matriz[2][2] * matriz[0][1] * matriz[1][0]);

	determinante = diagonal_principal - diagonal_secundaria;

	if (determinante < 0) {
		determinante = determinante * (-1);
	}


	//transpuesta de la matriz adjunta
	float matriztranspuesta[3][3];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			matriztranspuesta[i][j] = matrizadjunta[j][i];
		}
	}

	float matriz_inversa[3][3];

	//mostrar matriz que ingreso el usuario
	cout << "Matriz ingresada:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matriz[i][j] << " ";
		}
		cout << "\n";
	}

	/*
	* Calcular inversa si el determinante es distinto de cero, si el determinante es cero se muestra un mensaje
	* indicando que la matriz no tiene inversa.
	*/
	if (determinante != 0) {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				matriz_inversa[i][j] = matriztranspuesta[i][j] / -determinante;
			}
		}
		cout << "Matriz Inversa" << endl;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cout << matriz_inversa[j][i] << " ";
			}
			cout << "\n";
		}
	}
	else {
		cout << "\nLa matriz ingresada no tiene inversa. \n";
	}
}