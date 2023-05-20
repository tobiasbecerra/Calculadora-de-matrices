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

	cout << "ingrese la cantidad de filas y columnas que va a tener su primer matriz: " << endl;
	cout << "filas: ";
	cin >> filas;
	cout << "columnas: ";
	cin >> columnas;
	cout << "\ningrese la cantidad de filas y columnas que va a tener su segunda matriz: " << endl;
	cout << "filas: ";
	cin >> segunda_filas;
	cout << "columnas: ";
	cin >> segunda_columnas;

	/*cargar_matrices(matriz, segunda_matriz, filas, columnas, segunda_filas, segunda_columnas);
	mostrar_matrices(matriz, segunda_matriz, filas, columnas, segunda_filas, segunda_columnas);

	sumar_matrices(matriz, segunda_matriz,filas, columnas, segunda_filas, segunda_columnas);
	restar_matrices(matriz, segunda_matriz, filas, columnas, segunda_filas, segunda_columnas);
	escalar_matriz(matriz, filas, columnas);
	escalar_segundamatriz(segunda_matriz, segunda_filas, segunda_columnas);*/

	int opc;

	do {
		cout << "\t\t\tMenu" << endl;
		cout << "\t1. Sumar matrices" << endl;
		cout << "\t2. Restar matrices" << endl;
		cout << "\t3. Multiplicar matrices por un escalar" << endl;
		cout << "\t4. Encontrar matriz inversa de una matriz" << endl;
		cout << "\t5. Resolver sistema de ecuaciones 3x3" << endl;
		cout << "\t6. Salir\n" << endl;
		cout << "\tOpcion: ";
		cin >> opc;

		switch (opc) {
		case 1:
			cargar_matrices(matriz, segunda_matriz, filas, columnas, segunda_filas, segunda_columnas);
			sumar_matrices(matriz, segunda_matriz, filas, columnas, segunda_filas, segunda_columnas);
			break;
		case 2:
			cargar_matrices(matriz, segunda_matriz, filas, columnas, segunda_filas, segunda_columnas);
			restar_matrices(matriz, segunda_matriz, filas, columnas, segunda_filas, segunda_columnas);
			break;
		case 3:
			cargar_matrices(matriz, segunda_matriz, filas, columnas, segunda_filas, segunda_columnas);
			escalar_matriz(matriz, filas, columnas);
			break;
		case 4:
			break;
		case 5:
			break;
		}
	} while (opc != 6);
	
	return 0;
}
