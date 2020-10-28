#ifndef HEADER_H
#define HEADER_H

void define_array(int *dir_number, int &N);
//define el tamaño del array y pide al usuario que ingrese todos sus valores.

void order_acendent(int *dir_number, int &N);
//ordena de forma acendente y llama a la funcion view_array.

void order_decendent(int *dir_number, int &N);
//ordena de forma acendente y llama a la funcion view_array.

void view_array(int *dir_number, int &N);
//Recorre y muestra el arreglo en pantalla.

#endif