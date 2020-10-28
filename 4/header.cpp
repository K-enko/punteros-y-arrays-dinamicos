#include <iostream>
#include <string>
using namespace std;

#include "header.h"

void request_phrases(string *dir_frase)
{
	cout << "Ingrese una frase o palabra: ";
	getline(cin, *dir_frase);
}

void count_vowels(string *dir_frase)
{
	int cont_a=0;
	int cont_e=0;
	int cont_i=0;
	int cont_o=0;
	int cont_u=0;

	for(int j=0 ; j< dir_frase->size() ; j++)
	{
		if((dir_frase -> at(j) == 'a') || (dir_frase -> at(j) == 'A'))
		{
			cont_a++;
		}
		else
		{
			if((dir_frase -> at(j) == 'e') || (dir_frase -> at(j) == 'E'))
			{
				cont_e++;
			}
			else
			{
				if((dir_frase -> at(j) == 'i') || (dir_frase -> at(j) == 'I'))
				{
					cont_i++;
				}
				else
				{
					if((dir_frase -> at(j) == 'o') || (dir_frase -> at(j) == 'O'))
					{
						cont_o++;
					}
					else
					{
						if((dir_frase -> at(j) == 'u') || (dir_frase -> at(j) == 'U'))
						{
							cont_u++;
						}
					}
				}
			}
		}
	}

	cout << "Cantidad de vocales: " << endl;
	cout << "a: " << cont_a << endl;
	cout << "e: " << cont_e << endl;
	cout << "i: " << cont_i << endl;
	cout << "o: " << cont_o << endl;
	cout << "u: " << cont_u << endl;
	cout << endl;
}
