#include <iostream>
#include <string>
using namespace std;

#include "header.h"

int main()
{
	string frase;
	string *dir_frase = NULL;
	dir_frase = &frase;
	
	int menu;

	do
	{
		cout << "1. Ingresasr frase." << endl;
		cout << "2. Analizar frase." << endl;
		cout << endl;
		cout << "0. Salir." << endl;
		cout << endl;
		cin >> menu;
		cout << endl;
		cin.ignore();

		switch(menu)
		{
			case 1:

			request_phrases(dir_frase);

			break;
			case 2:

			count_vowels(dir_frase);

			break;
			case 0:

			cout << "El programa se esta cerrando..." << endl;
			cin.get();

			break;
			default:

			cout << "No ingreso una opcion valida. Vuelva a intentar." << endl;
		}
	}while(menu != 0);

	return 0;
}