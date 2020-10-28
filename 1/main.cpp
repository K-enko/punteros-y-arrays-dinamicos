#include <iostream>
using namespace std;

#include "header.h"

int main()
{
	const int N = 10;
	int *dir_number = NULL;

	cout << "Preciona cualquier tecla para buscar y mostrar los numeros pares en la lista..." << endl;

	cin.get();

	search_numbers_pairs(dir_number, N);

	cin.get();

	return 0;
}