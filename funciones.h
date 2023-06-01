#pragma once
#include <iostream>
#include <cctype>
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

void sumar(int matriz[10][10], int segunda_matriz[10][10]) {
	int matriz_sumada[10][10];
	int filas, columnas, segunda_filas, segunda_columnas;
	
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

	if (filas != segunda_filas || columnas != segunda_columnas) {
		cout << "\nNo se pueden sumar matrices de distinta dimension." << endl;
	}
	else {
		cargar_primer_matriz(matriz, filas, columnas);
		cargar_segunda_matriz(segunda_matriz, segunda_filas, segunda_columnas);
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
}

void restar(int matriz[10][10], int segunda_matriz[10][10]) {
	int matriz_restada[10][10];
	int filas, columnas, segunda_filas, segunda_columnas;

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

	if (filas != segunda_filas || columnas != segunda_columnas) {
		cout << "\nNo se pueden restar matrices de distinta dimension." << endl;
	}
	else {
		cargar_primer_matriz(matriz, filas, columnas);
		cargar_segunda_matriz(segunda_matriz, segunda_filas, segunda_columnas);
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

void matriz_inversa() {
	float matrizcofactores[3][3], matrizadjunta[3][3];
	float matriz[10][10];
	float filas, columnas;

	cout << "FILAS de su matriz: ";
	cin >> filas;
	cout << "COLUMNAS de su matriz: ";
	cin >> columnas;
	//comienzo inversa 2x2
	if (filas == 2 && columnas == 2) {
		cout << "\nCargue su matriz: " << endl;
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				cout << "Digite un numero [" << i + 1 << "][" << j + 1 << "]: ";
				cin >> matriz[i][j];
			}
		}

		//determinante por sarrus

		float determinante = matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];

		if (determinante < 0) {
			determinante = determinante * (-1);
		}

		float matriz_inversa[2][2];

		//calcular 1/det 

		float det = 1 / determinante;

		//modificar matriz para poder hacer la inversa

		float matrizmodificada[2][2];

		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				matrizmodificada[i][j] = matriz[i][j];
			}
		}

		float auxiliar;

		auxiliar = matrizmodificada[0][0];
		matrizmodificada[0][0] = matrizmodificada[1][1];
		matrizmodificada[1][1] = auxiliar;
		matrizmodificada[0][1] = -matrizmodificada[0][1];
		matrizmodificada[1][0] = -matrizmodificada[1][0];

		//mostrar matriz que ingreso el usuario
		cout << "Matriz ingresada:" << endl;
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				cout << matriz[i][j] << " ";
			}
			cout << "\n";
		}

		float matrizadjunta2x2[2][2];
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				matrizadjunta2x2[i][j] = matrizmodificada[j][i];
			}
		}
		/*
		* Calcular inversa si el determinante es distinto de cero, si el determinante es cero se muestra un mensaje
		* indicando que la matriz no tiene inversa.
		*/
		if (det != 0) {
			for (int i = 0; i < 2; i++) {
				for (int j = 0; j < 2; j++) {
					matriz_inversa[i][j] = matrizadjunta2x2[i][j] * -det;
				}
			}
			cout << "Matriz Inversa" << endl;
			for (int i = 0; i < 2; i++) {
				for (int j = 0; j < 2; j++) {
					cout << matriz_inversa[j][i] << " ";
				}
				cout << "\n";
			}
		}
		else {
			cout << "\nLa matriz ingresada no tiene inversa. \n";
		}

		// fin inversa 2x2
	}
	if (filas == 3 && columnas == 3) {
		cout << "\nCargue su matriz: " << endl;
		for (int i = 0; i < filas; i++) {
			for (int j = 0; j < columnas; j++) {
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
			cout << "\nLa matriz ingresada no tiene inversa, su determinante es 0." << endl;
		}
	}
}

char signonum(float n) {
	char signo;
	if (n > 0) {
		signo = '+';
	}
	else if (n < 0) {
		signo = '-';
	}
	else {
		signo = '+';
	}
	return signo;
}


void sistema() {

	float x1, y1, z1, x2, y2, z2, x3, y3, z3, s1, s2, s3;
	float delta_s, delta_x, delta_y, delta_z;



	cout << "Primera ecuacion: "<<endl;
	cout << "x1: ";
	cin >> x1;
	cout << "y1: ";
	cin >> y1;
	cout << "z1: ";
	cin >> z1;
	cout << x1 << "x " << signonum(y1) << " " << abs(y1) << "y " << signonum(z1) << " " << abs(z1) << "z = ";
	cin >> s1;
	cout << "\n";
	cout << "Segunda ecuacion: "<<endl;
	cout << "x2: ";
	cin >> x2;
	cout << "y2: ";
	cin >> y2;
	cout << "z2: ";
	cin >> z2;
	cout << x2 << "x " << signonum(y2) << " " << abs(y2) << "y " << signonum(z2) << " " << abs(z2) << "z = ";
	cin >> s2;
	cout << "\n";
	cout << "Tercera ecuacion: "<<endl;
	cout << "x3: ";
	cin >> x3;
	cout << "y3: ";
	cin >> y3;
	cout << "z3: ";
	cin >> z3;
	cout << x3 << "x " << signonum(y3) << " " << abs(y3) << "y " << signonum(z3) << " " << abs(z3) << "z = ";
	cin >> s3;
	cout << "\n";

	cout << "\n";
	cout << x1 << "x " << signonum(y1) << " " << abs(y1) << "y " << signonum(z1) << " " << abs(z1) << "z = " << s1 << endl;
	cout << x2 << "x " << signonum(y2) << " " << abs(y2) << "y " << signonum(z2) << " " << abs(z2) << "z = " << s2 << endl;
	cout << x3 << "x " << signonum(y3) << " " << abs(y3) << "y " << signonum(z3) << " " << abs(z3) << "z = " << s3<<endl << "\n";

	delta_s = ((x1 * y2 * z3) + (x2 * y3 * z1) + (x3 * y1 * z2) - (z1 * y2 * x3) - (z2 * y3 * x1) - (z3 * y1 * x2));
	delta_x = ((s1 * y2 * z3) + (s2 * y3 * z1) + (s3 * y1 * z2) - (z1 * y2 * s3) - (z2 * y3 * s1) - (z3 * y1 * s2));
	delta_y = ((x1 * s2 * z3) + (x2 * s3 * z1) + (x3 * s1 * z2) - (z1 * s2 * x3) - (z2 * s3 * x1) - (z3 * s1 * x2));
	delta_z = ((x1 * y2 * s3) + (x2 * y3 * s1) + (x3 * y1 * s2) - (s1 * y2 * x3) - (s2 * y3 * x1) - (s3 * y1 * x2));

	if (delta_s != 0) {
		cout << "Solucion de x: ";
		cout << delta_x / delta_s << endl;
		cout << "Solucion de y: ";
		cout << delta_y / delta_s << endl;
		cout << "Solucion de z: ";
		cout << delta_z / delta_s << endl;

	}
	else {
		if (delta_x == 0 && delta_y == 0 && delta_z == 0) {
			cout << "\nEl sistema tiene infinitas soluciones." << endl;
		}
		else {
			cout << "El sistema no tiene solucion." << endl;
		}
	}
}

void multiplicacion() {
	float matriz1[10][10], matriz2[10][10], matriz_resultante[10][10];
	int filas, columnas, segunda_filas, segunda_columnas;
	char opcion;
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

	if (columnas == segunda_filas) {
		cout << "\nCargue su primer matriz." << endl;
		for (int i = 0; i < filas; i++) {
			for (int j = 0; j < columnas; j++) {
				cout << "Digite un numero: [" << i + 1 << "][" << j + 1 << "]: ";
				cin >> matriz1[i][j];
			}
		}
		cout << "\nCargue su segunda matriz." << endl;
		for (int i = 0; i < segunda_filas; i++) {
			for (int j = 0; j < segunda_columnas; j++) {
				cout << "Digite un numero: [" << i + 1 << "][" << j + 1 << "]: ";
				cin >> matriz2[i][j];
			}
		}

		//Multiplicacion

		for (int i = 0; i < filas; i++) {
			for (int j = 0; j < segunda_columnas; j++) {
				matriz_resultante[i][j] = 0;
				for (int k = 0; k < columnas; k++) {
					matriz_resultante[i][j] += matriz1[i][k] * matriz2[k][j];
				}
			}
		}

		cout << "\nMatriz multiplicada" << endl;
		for (int i = 0; i < filas; i++) {
			cout << "| ";
			for (int j = 0; j < segunda_columnas; j++) {
				cout << matriz_resultante[i][j] << " ";
			}
			cout << "|";
			cout << "\n";
		}
	}
	else {
		cout << "\nLa multiplicacion de matrices no se puede realizar porque el numero de columnas de su primer matriz no es igual al numero de filas de su segunda matriz. Vuelva a intentarlo." << endl;
		cout << "\nDesea volver a intentarlo? (S / N): ";
		cin >> opcion;
		opcion = toupper(opcion);

		if (opcion == 'S') {
			return multiplicacion();
		}
		else {
			return;
		}
	}

}