#include <iostream>
using namespace std;

#include "header.h"

int main()
{
	const int N = 15;
	int *dir_number = NULL;

	cout << "Precione cualquier tecla para inciar la busqueda del menor numero del arreglo..." << endl;

	cin.get();

	search_less_number(dir_number, N);

	cin.get();

	return 0;
}