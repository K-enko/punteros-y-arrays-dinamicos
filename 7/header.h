#ifndef HEADER_H
#define HEADER_H

struct Alumno
{
	string nombre;
	int edad;
	double promedio;
};

void pedirdatos(Alumno *punt_alum, int *p1);

void compararpromedio(Alumno *punt_alum, int *p1);

#endif