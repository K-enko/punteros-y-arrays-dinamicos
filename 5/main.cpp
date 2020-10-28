#include <iostream>
using namespace std;

int main()
{
	int filas_m1 = 2;
	int columnas_m1 = 2;
	int filas_m2 = 2;
	int columnas_m2 = 2;
	int filas_m3 = 2;
	int columnas_m3 = 2;

	double **punt_m1 = new double*[filas_m1];
	double **punt_m2 = new double*[filas_m2];
	double **punt_m3 = new double*[filas_m3];	

	for(int i=0; i<filas_m1; i++)
	{
		punt_m1[i] = new double[columnas_m1];
		punt_m2[i] = new double[columnas_m2];
		punt_m3[i] = new double[columnas_m3];
	}

	punt_m1[0][0] = 16;
	punt_m1[0][1] = 2;
	punt_m1[1][0] = 5;
	punt_m1[1][1] = 12.7;

	punt_m2[0][0] = 1;
	punt_m2[0][1] = 5;
	punt_m2[1][0] = 5.1;
	punt_m2[1][1] = 7;

	punt_m3[0][0] = punt_m1[0][0] + punt_m2[0][0];
	punt_m3[0][1] = punt_m1[0][0] + punt_m2[0][1];
	punt_m3[1][0] = punt_m1[0][0] + punt_m2[1][0];
	punt_m3[1][1] = punt_m1[0][0] + punt_m2[1][1];

	cout << "|" << punt_m3[0][0] << "|" << punt_m3[0][1] << "|" << endl;
	cout << "|" << punt_m3[1][0] << "|" << punt_m3[1][1] << "|" << endl;

	cin.get();

	delete []punt_m1;
	delete []punt_m2;
	delete []punt_m3;
	delete *punt_m1;
	delete *punt_m2;
	delete *punt_m3;

	return 0;
}