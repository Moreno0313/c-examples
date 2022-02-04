/*
	Programa de ejemplo para ALSE-2 para imprimir
	el tiempo de ejecuci�n de un programa (factorial).
	Sin validaciones.
	basado en: https://www.geeksforgeeks.org/program-for-factorial-of-a-number/
	Autor: 	  Nombre(s) de autor(es)
	Licencia: GPL V3 -- https://www.gnu.org/licenses/licenses.es.html
	Fecha:	  28 de enero de 2022
	Versi�n:  1.0.0
*/

#include<stdio.h> //inclusi�n de librer�a para entradas y salidas est�ndar
#include<time.h> //para runtime - clock_t, clock(), CLOCKS_PER_SEC
#include<stdlib.h> //para atoi()

/*Definici�n de funciones (prototipos)*/
int factorial(int);


/*
	Se imprime el resultado con printf()
	valor de retorno: int --> 0 en todos los casos
	Argumentos: 
	argc= 2, argv[0]="exe_name.bin", argv[1]="#"
	donde # representa un n�mero entero
*/
int main (int argc, char *argv[])
{
	clock_t tiempo_inicio, tiempo_fin;
	double tiempo_usado = 0;
	
	tiempo_inicio = clock(); //funci�n para tomar reloj.
	/*inicio de proceso*/

	printf ("\n\n\t %s! = %d\n\n",argv[1], factorial(atoi(argv[1])));
	
	/*fin de proceso*/
	tiempo_fin = clock();
	tiempo_usado = (double)(tiempo_fin - tiempo_inicio) / CLOCKS_PER_SEC;

	printf ("El tiempo de ejecuci�n del programa es: %f\n", tiempo_usado);
	
	return 0;
}

/*
calcula el factoria en una l�nea
usando operador trinario. Funci�n recurrente.
return: int con resultado
argumento n --> entero de entrada con valor a operar
*/
int factorial(int n)
{
    // single line to find factorial
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}
