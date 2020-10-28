#include <iostream>
#include <string>
using namespace std;

#include "header.h"

void pedirdatos(Alumno *punt_alum, int *p1)
{
	if(*p1 < 3)
	{
		cout << "Digite el nombre del alumno: ";
	    getline(cin, punt_alum[*p1].nombre);
	    cout << endl;
	    cout << "Digite la edad del alumno: ";
	    cin >> punt_alum[*p1].edad;
	    cout << endl;
	    cout << "Digite el promedio del alumno: ";
	    cin >> punt_alum[*p1].promedio;
	    cout << endl;
		(*p1)++;
	}
	else
	{
		cout << "No hay mas espacio para agregar alumnos." << endl;
	}
	cout << endl;
}

void compararpromedio(Alumno *punt_alum, int *p1)
{
	double aux_prom=0;
	int aux_cont=0;
	for(int i=0; i<*p1 ; i++)
	{
		if(aux_prom < punt_alum[i].promedio)
		{
			cout << "." << endl;
			aux_prom = punt_alum[i].promedio;
			aux_cont = i;
		}
	}

	cout << "--------------------------------------------------------------------" << endl;
	cout << "El mejor promedio es de: " << punt_alum[aux_cont].promedio << endl;
	cout << "Del alumno: " << punt_alum[aux_cont].nombre << endl;
	cout << "Edad: " << punt_alum[aux_cont].edad << endl;
	cout << "--------------------------------------------------------------------" << endl;
	cout << endl;
}