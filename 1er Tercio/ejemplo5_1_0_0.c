/*
	Programa de ejemplo para ALSE-2 para mostrar error de
	discretizaci�n (M�todos num�ricos aplicados a la ingenier�a. Nieves, A. Dom�nguez, F. Grupo Editorial Patria. 2014. Secci�n 1.3. ejemplo 1.12).
	Autor: 	  Nombre(s) de autor(es)
	Licencia: GPL V3 -- https://www.gnu.org/licenses/licenses.es.html
	Fecha:	  28 de enero de 2022
	Versi�n:  1.0.0
*/

#include<stdio.h> //inclusi�n de librer�a para entradas y salidas est�ndar

#define MAXIMO 10000

int main (int argc, char *argv[])
{
	short unsigned int  contador = 0;
	float resultado = 0.0;
	
	for (contador = 0 ; contador < MAXIMO ; contador ++)
		resultado += 0.0001;

	printf ("Cuando se suma %d veces 0.0001 con �l mismo es: %f\n", MAXIMO, resultado);
	
	return 0;
}

