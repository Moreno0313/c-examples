/*
	Programa de ejemplo para ALSE-2. Algoritmo 
	para encontrar si un número es par (even)
	o impar (odd)
	
	Autor: 	  Nombre(s) de autor(es)
	Licencia: GPL V3 -- https://www.gnu.org/licenses/licenses.es.html
	Fecha:	  28 de enero de 2022
	Versión:  1.0.0
*/

#include<stdio.h> //inclusión de librería para entradas y salidas estándar
#include<stdint.h> //para intN_t
#include<stdlib.h> //para atoi()
#include<ctype.h> //para isdigit()

/*
	Se imprime el resultado con printf()
	valor de retorno: uint8_t --> 0: fin sin error
	                              1: fin con error de cantidad de argumentos
	                              2: fin con error de tipo de argumento
	Argumentos: 
	argc= 2, argv[0]="exe_name.bin", argv[1]="#"
	donde # representa un número entero
*/
int main (int argc, char* argv[])
{
	uint8_t bandera_salida = 0, cont = 0;
	
	/*****************************************
	 Sección de validación: cantidad de
	 argumentos y valor entero.
	******************************************/
	if (argc != 2)/*validación de cantidad de argumentos*/
	{
		printf("\nError de cantidad de argumentos\nUsage: \n\t%s integer_value\n\tej factorial of 5: %s 5\n\n", argv[0],argv[0]);
		bandera_salida = 1; // badera de salida con error de cantidad de argumentos
	}
	else /*validación de valor entero*/
	{
		if (argv[1][cont] == '-')
			cont = 1;
		do{
			if ( !isdigit( argv[1][cont] ) )
			{
				printf("\nIngrese un valor entero\nUsage: \n\t%s integer_value\n\tej factorial of 5: %s 5\n\n", argv[0],argv[0]);
				bandera_salida = 2; //error argumento 2 no es digito
			}
			cont++;
		}while (argv[1][cont] != '\n' && argv[1][cont] != '\0' && bandera_salida == 0);
	}

	/*****************************************
	 Sección de proceso para encontrar si
	 número es par o impar.
	******************************************/
	if (bandera_salida == 0) /*si la bandera está en 0, no hay errores.*/
	{
		if ( atoi(argv[1])%2 == 0 )
			printf("%d es par.\n", atoi(argv[1])); // ¿usar nuevamente función atoi o crear variable?
		else
			printf("%d es impar.\n", atoi(argv[1])); // ¿usar nuevamente función atoi o crear variable?
	}

	return bandera_salida;
}
