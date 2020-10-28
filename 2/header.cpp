#include <iostream>
using namespace std;

void search_less_number(int *dir_number, const int N)
{
	dir_number = new int[N] {2,3,4,5,6,7,8,9,10,11,1,12,13,14,15};
	int menor = dir_number[0];
	int pos;

	for(int i=0 ; i<N ; i++)
	{
		if(menor > dir_number[i])
		{
			menor = dir_number[i];
			pos = i;
		}
	}

	cout << "El menor numero del arreglo es: " << dir_number[pos] << endl;

	delete []dir_number;
}