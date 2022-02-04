/*
	Programa de ejemplo para ALSE-2. Algoritmo 
	para encontrar si un n�mero es par (even)
	o impar (odd)
	Otros en: https://origin.geeksforgeeks.org/c-program-to-check-whether-a-given-number-is-even-or-odd/
	Autor: 	  Nombre(s) de autor(es)
	Licencia: GPL V3 -- https://www.gnu.org/licenses/licenses.es.html
	Fecha:	  28 de enero de 2022
	Versi�n:  1.1.0
*/

#include<stdio.h> //inclusi�n de librer�a para entradas y salidas est�ndar
#include<stdint.h> //para intN_t
#include<stdlib.h> //para atoi() y exit()
#include<ctype.h> //para isdigit()

/*
	Se imprime el resultado con printf()
	valor de retorno: int en 0 --> 0: fin sin error
	exit(1): fin con error de cantidad de argumentos
    exit(2): fin con error de tipo de argumento
	Argumentos: 
	argc= 2, argv[0]="exe_name.bin", argv[1]="#"
	donde # representa un n�mero entero
*/
int main (int argc, char* argv[])
{
	uint8_t cont = 0; //contador para validaci�n de n�mero entero
	int valor = 0; // para atoi
	
	/*****************************************
	 Secci�n de validaci�n: cantidad de
	 argumentos y valor entero.
	******************************************/
	if (argc != 2)/*validaci�n de cantidad de argumentos*/
	{
		printf("\nError de cantidad de argumentos\nUsage: \n\t%s integer_value\n\tej factorial of 5: %s 5\n\n", argv[0],argv[0]);
		exit(1);
	}
	else /*validaci�n de valor entero*/
	{
		if (argv[1][cont] == '-')/*Si es negativo, incremente el contador*/
			cont = 1;
		do{
			if ( !isdigit( argv[1][cont] ) ) // si no es digito, haga:
			{
				printf("\nIngrese un valor entero\nUsage: \n\t%s integer_value\n\tej factorial of 5: %s 5\n\n", argv[0],argv[0]);
				exit(2);
			}
			cont++;
		}while (argv[1][cont] != '\n' && argv[1][cont] != '\0');
	}

	/*****************************************
	 Secci�n de proceso para encontrar si
	 n�mero es par o impar.
	******************************************/
	valor = atoi(argv[1]); //funcion para convertir un string en int
	if ( valor%2 == 0 )
		printf("\n\t%d es par.\n\n", valor);
	else
		printf("\n\t%d es impar.\n\n", valor);
	
	return 0;
}
