#include <iostream>
#include <string>
using namespace std;

#include "header.h"

int main()
{
	Alumno alumno[3];
	int cont = 0;
	Alumno *punt_alum = &alumno[cont];
	
	int menu;

	do
	{
		cout << "Cant. de alumnos ingresados: " << cont << endl;
		cout << endl;
		cout << "1. Ingresar alumno" << endl;
		cout << "2. Ver el mejor promedio" << endl;
		cout << endl;
		cout << "0. Salir" << endl;
		cout << endl;
		cout << "-> ";
		cin >> menu;
		cin.ignore();

		switch(menu)
		{
			case 1:

			pedirdatos( punt_alum, &cont);

			break;
			case 2:

			compararpromedio( punt_alum, &cont);

			break;
			case 0:

			cout << "El programa se esta cerrando..." << endl;
			cin.get();

			break;
			default:

			cout << "No ingreso una opcion valida. Vuelva a intentar." << endl;
		}
	}while(menu!=0);

	return 0;
}