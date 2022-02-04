/*
	Programa de ejemplo para ALSE-2. Algoritmo 
	para encontrar si un número es par (even)
	o impar (odd)
	Otros en: https://origin.geeksforgeeks.org/c-program-to-check-whether-a-given-number-is-even-or-odd/
	Autor: 	  Nombre(s) de autor(es)
	Licencia: GPL V3 -- https://www.gnu.org/licenses/licenses.es.html
	Fecha:	  28 de enero de 2022
	Versión:  1.1.0
*/

#include<stdio.h> //inclusión de librería para entradas y salidas estándar
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
	donde # representa un número entero
*/
int main (int argc, char* argv[])
{
	uint8_t cont = 0; //contador para validación de número entero
	int valor = 0; // para atoi
	
	/*****************************************
	 Sección de validación: cantidad de
	 argumentos y valor entero.
	******************************************/
	if (argc != 2)/*validación de cantidad de argumentos*/
	{
		printf("\nError de cantidad de argumentos\nUsage: \n\t%s integer_value\n\tej factorial of 5: %s 5\n\n", argv[0],argv[0]);
		exit(1);
	}
	else /*validación de valor entero*/
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
	 Sección de proceso para encontrar si
	 número es par o impar.
	******************************************/
	valor = atoi(argv[1]); //funcion para convertir un string en int
	if ( valor%2 == 0 )
		printf("\n\t%d es par.\n\n", valor);
	else
		printf("\n\t%d es impar.\n\n", valor);
	
	return 0;
}
