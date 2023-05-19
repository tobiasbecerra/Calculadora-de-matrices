/*
	Calculadora de matrices - Parcial 2 Introduccion a la programacion
*/

#include <iostream>
#include "funciones.h"
using namespace std;

int main() { 

	int matriz[10][10];
	int filas, columnas;
	int segunda_matriz[10][10];
	int segunda_filas, segunda_columnas;

	cout << "Ingrese la cantidad de FILAS y COLUMNAS que va a tener su PRIMER matriz: " << endl;
	cout << "FILAS: ";
	cin >> filas;
	cout << "COLUMNAS: ";
	cin >> columnas;
	cout << "\nIngrese la cantidad de FILAS y COLUMNAS que va a tener su SEGUNDA matriz: " << endl;
	cout << "FILAS: ";
	cin >> segunda_filas;
	cout << "COLUMNAS: ";
	cin >> segunda_columnas;

	cargar_matrices(matriz, segunda_matriz, filas, columnas, segunda_filas, segunda_columnas);
	mostrar_matrices(matriz, segunda_matriz, filas, columnas, segunda_filas, segunda_columnas);

	sumar_matrices(matriz, segunda_matriz,filas, columnas, segunda_filas, segunda_columnas);
	restar_matrices(matriz, segunda_matriz, filas, columnas, segunda_filas, segunda_columnas);
	escalar_matriz(matriz, filas, columnas);
	escalar_segundamatriz(segunda_matriz, segunda_filas, segunda_columnas);
	return 0;
}
