#include <iostream>
using namespace std;

#include "header.h"

void order_size(int *p1, int *p2)
{
	cout << "Ingrese la cantidad de filas: ";
	cin >> *p1;
	cout << endl;
	cout << "Ingrese la cantidad de columnas: ";
	cin >> *p2;
	cout << endl;
}

void order_items(int **punt, int *p1, int *p2)
{
	for(int k=0 ; k<*p1 ; k++)
	{
		for(int j=0 ; j<*p2 ; j++)
		{
			cout << k << "x" << j << ": ";
			cin >> *(*(punt+k)+j);
		}
	}
}

void trasponer_matriz(int **punt, int *p1, int *p2)
{
	for(int k=0 ; k<*p2 ; k++)
	{
		for(int j=0 ; j<*p1 ; j++)
		{
			cout << "|" << *(*(punt+j)+k) << "|";

			if( j+1 == *p1)
			{
				cout << endl;
			}
		}
	}
}