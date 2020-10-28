#include <iostream>
using namespace std;

#include "header.h"

int main()
{
	int menu;
	int N;
	int *dir_number = NULL;
	dir_number = new int[N];

	do
	{
		cout << "1. Definir tamanio y valores del arreglo." << endl;
	    cout << "2. Ordenar y mostrar." << endl;
	    cout << endl;
	    cout << "0. Salir." << endl;
	    cin >> menu;
	    cout << endl;
	    cin.ignore();

	    switch(menu)
	    {
	    	case 1:

	    	define_array(dir_number, N);

	    	break;
	    	case 2:

	    	do
	    	{
	    		cout << "1. Ordernar acendente" << endl;
	    		cout << "2. Ordenar decendente" << endl;
	    		cout << endl;
	    		cout << "0. Volver al menu principal" << endl;
	    		cin >> menu;
	    		cout << endl;
	    		cin.ignore();

	    		switch(menu)
	    		{
	    			case 1:

	    			order_acendent(dir_number, N);

	    			break;
	    			case 2:

	    			order_decendent(dir_number, N);

	    			break;
	    			case 0:

	    			break;
	    			default:

	    			cout << "No ingreso una opcion valida. Vuelva a intentar." << endl;
	    	        cout << endl;
	    		}
	    	}while(menu!=0);

	    	menu = 1;

	    	break;
	    	case 0:

	    	delete []dir_number;

	    	cout << "El programa se esta cerrando..." << endl;
	    	cin.get();

	    	break;
	    	default:

	    	cout << "No ingreso una opcion valida. Vuelva a intentar." << endl;
	    	cout << endl;
	    }
	}while(menu != 0);

	return 0;
}