/*
	Calculadora de matrices - Parcial 2 Introduccion a la programacion
*/

#include <iostream>
#include "funciones.h"
using namespace std;

int main() { 
	int matriz[10][10], segunda_matriz[10][10];
	int filas, columnas, segunda_filas, segunda_columnas, opc;
	
	cout << "  #####                                                                                                                                              " << endl;
	cout << " #     #   ##   #       ####  #    # #        ##   #####   ####  #####    ##      #####  ######    #    #   ##   ##### #####  #  ####  ######  ####  " << endl;
	cout << " #        #  #  #      #    # #    # #       #  #  #    # #    # #    #  #  #     #    # #         ##  ##  #  #    #   #    # # #    # #      #      " << endl;
	cout << " #       #    # #      #      #    # #      #    # #    # #    # #    # #    #    #    # #####     # ## # #    #   #   #    # # #      #####   ####  " << endl;
	cout << " #       ###### #      #      #    # #      ###### #    # #    # #####  ######    #    # #         #    # ######   #   #####  # #      #           # " << endl;
	cout << " #     # #    # #      #    # #    # #      #    # #    # #    # #   #  #    #    #    # #         #    # #    #   #   #   #  # #    # #      #    # " << endl;
	cout << "  #####  #    # ######  ####   ####  ###### #    # #####   ####  #    # #    #    #####  ######    #    # #    #   #   #    # #  ####  ######  ####  " << endl;

	do {
		cout << "\n\t\t\tMenu" << endl;
		cout << "\t1. Cargar filas y columnas (para la suma y la resta entre matrices de MISMA DIMENSION)" << endl;
		cout << "\t2. Sumar matrices" << endl;
		cout << "\t3. Restar matrices" << endl;
		cout << "\t4. Multiplicar matrices por un escalar" << endl;
		cout << "\t5. Encontrar matriz inversa de una matriz (hasta 3x3)" << endl;
		cout << "\t6. Resolver sistema de ecuaciones 3x3" << endl;
		cout << "\t7. Salir\n" << endl;
		cout << "\tOpcion: ";
		cin >> opc;

		switch (opc) {
		case 1:
			cout << "\nIngrese la cantidad de FILAS y COLUMNAS que va a tener su PRIMER matriz: " << endl;
			cout << "FILAS: ";
			cin >> filas;
			cout << "COLUMNAS: ";
			cin >> columnas;
			cout << "\nIngrese la cantidad de FILAS y COLUMNAS que va a tener su SEGUNDA matriz: " << endl;
			cout << "FILAS: ";
			cin >> segunda_filas;
			cout << "COLUMNAS: ";
			cin >> segunda_columnas;
			break;
		case 2:
			if (filas == segunda_filas && columnas == segunda_columnas) {
				cargar_primer_matriz(matriz, filas, columnas);
				cargar_segunda_matriz(segunda_matriz, segunda_filas, segunda_columnas);
				mostrar_primer_matriz(matriz, filas, columnas);
				mostrar_segunda_matriz(segunda_matriz, segunda_filas, segunda_columnas);
				sumar(matriz, segunda_matriz, filas, columnas, segunda_columnas, segunda_filas);
			}
			else {
				cout << "\nNo se puede sumar matrices de distinta dimension.";
			}	
			break;
		case 3:
			if (filas == segunda_filas && columnas == segunda_columnas) {
				cargar_primer_matriz(matriz, filas, columnas);
				cargar_segunda_matriz(segunda_matriz, segunda_filas, segunda_columnas);
				mostrar_primer_matriz(matriz, filas, columnas);
				mostrar_segunda_matriz(segunda_matriz, segunda_filas, segunda_columnas);
				restar(matriz, segunda_matriz, filas, columnas, segunda_columnas, segunda_filas);
			}
			else {
				cout << "\nNo se pueden restar matrices de distinta dimension.";
			}
			break;
		case 4:
			escalar();
			break;
		case 5:
			break;
		case 6:
			break;
		}
	} while (opc != 7);
	
	return 0;
}