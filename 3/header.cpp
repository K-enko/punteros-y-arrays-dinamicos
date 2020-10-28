#include <iostream>
using namespace std;

#include "header.h"

void define_array(int *dir_number, int &N)
{
	cout << "Ingrese el tamanio del array: ";
	cin >> N;

	cout << "Ingrese los valores para el arreglo: " << endl;
	for(int i=0; i<N ; i++)
	{
		cout << i << ". ";
		cin >> dir_number[i];
	}
	cout << endl;
}

void order_acendent(int *dir_number, int &N)
{
	for(int i=1 ; i<N ; i++)
	{
		int pos = i;

		while((pos>0) && (dir_number[pos-1] > dir_number[pos]))
		{
			int aux = dir_number[pos];
			dir_number[pos] = dir_number[pos-1];
			dir_number[pos-1] = aux;

			pos--;
		}
	}

	view_array(dir_number, N);
}

void order_decendent(int *dir_number, int &N)
{
	for(int i=1 ; i<N ; i++)
	{
		int pos = i;

		while((pos>0) && (dir_number[pos-1]<dir_number[pos]))
		{
			int aux = dir_number[pos];
			dir_number[pos] = dir_number[pos-1];
			dir_number[pos-1] = aux;

			pos--;
		}
	}

	view_array(dir_number, N);
}

void view_array(int *dir_number, int &N)
{
	for(int i=0 ; i<N ; i++)
	{
		cout << dir_number[i] << endl;
	}
}