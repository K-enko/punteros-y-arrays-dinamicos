#include <iostream>
using namespace std;

#include "header.h"

void search_numbers_pairs(int *dir_number, const int N)
{
	dir_number = new int[N] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	for(int i=0; i<10 ; i++)
	{
		if(dir_number[i] % 2 == 0)
	    {
	    	cout << "El numero: " << dir_number[i] << " es par" << endl;
	    }
	    else
	    {
	    	cout << "El numero: " << dir_number[i] << " es impar" << endl;
	    }
	}

	delete [] dir_number;
}