#include <iostream>
using namespace std;

#include "header.h"

int main()
{
	int filas=0;
	int columnas=0;

	int **punt = new int*[filas];

	for(int i=0 ; i<filas ; i++)
	{
		punt[i] = new int[columnas];
	}

	int menu;

	do
	{
		cout << filas << "x" << columnas << endl;
		cout << endl;
		cout << "1. Definir tamanio" << endl;
		cout << "2. Insertar valores" << endl;
		cout << "3. Crear su amtriz traspuesta" << endl;
		cout << endl;
		cout << "0. Salir" << endl;
		cout << endl;
		cin >> menu;
		cin.ignore();
		cout << endl;

		switch(menu)
		{
			case 1:

			order_size(&filas, &columnas);

			break;
			case 2:

			order_items(punt, &filas, &columnas);

			break;
			case 3:

			trasponer_matriz(punt, &filas, &columnas);

			break;
			case 0:

			cout << "El programa se esta cerrando..." << endl;
			cin.get();

			break;
			default:

			cout << "No ingreso una opcion valida. Vuelva a intentar." << endl;
		}
	}while(menu != 0);

	for(int i = 0 ; i<filas ; i++)
	{
		delete[] punt[i];
	}

	return 0;
}