/*
	Calculadora de matrices - Parcial 2 Introduccion a la programacion
*/

#include <iostream>
#include "funciones.h"
using namespace std;

int main() { 
	int matriz[10][10], segunda_matriz[10][10];
	int opc;
	
	cout << "  #####                                                                                                                                              " << endl;
	cout << " #     #   ##   #       ####  #    # #        ##   #####   ####  #####    ##      #####  ######    #    #   ##   ##### #####  #  ####  ######  ####  " << endl;
	cout << " #        #  #  #      #    # #    # #       #  #  #    # #    # #    #  #  #     #    # #         ##  ##  #  #    #   #    # # #    # #      #      " << endl;
	cout << " #       #    # #      #      #    # #      #    # #    # #    # #    # #    #    #    # #####     # ## # #    #   #   #    # # #      #####   ####  " << endl;
	cout << " #       ###### #      #      #    # #      ###### #    # #    # #####  ######    #    # #         #    # ######   #   #####  # #      #           # " << endl;
	cout << " #     # #    # #      #    # #    # #      #    # #    # #    # #   #  #    #    #    # #         #    # #    #   #   #   #  # #    # #      #    # " << endl;
	cout << "  #####  #    # ######  ####   ####  ###### #    # #####   ####  #    # #    #    #####  ######    #    # #    #   #   #    # #  ####  ######  ####  " << endl;

	do {
		cout << "\n\t\t\tMenu" << endl;
		cout << "\t1. Sumar matrices" << endl;
		cout << "\t2. Restar matrices" << endl;
		cout << "\t3. Multiplicar matrices por un escalar" << endl;
		cout << "\t4. Encontrar matriz inversa de una matriz (hasta 3x3)" << endl;
		cout << "\t5. Resolver sistema de ecuaciones 3x3" << endl;
		cout << "\t6. Salir\n" << endl;
		cout << "\tOpcion: ";
		cin >> opc;

		switch (opc) {
		case 1:
			sumar(matriz, segunda_matriz);
			break;
		case 2:
			restar(matriz, segunda_matriz);
			break;
		case 3:
			escalar();
			break;
		case 4:
			matriz_inversa();
			break;
		case 5:
			sistema();
		}
	} while (opc != 6);
	
	return 0;
}