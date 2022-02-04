/*
	Programa de ejemplo para ALSE-2 para imprimir
	el tiempo de ejecución de un programa (factorial).
	Sin validaciones.
	ver  https://www.geeksforgeeks.org/program-for-factorial-of-a-number/
	Autor: 	  Nombre(s) de autor(es)
	Licencia: GPL V3 -- https://www.gnu.org/licenses/licenses.es.html
	Fecha:	  28 de enero de 2022
	Versión:  1.0.0
*/

#include<stdio.h> //inclusión de librería para entradas y salidas estándar
#include<time.h> //para runtime - clock_t, clock(), CLOCKS_PER_SEC
#include<stdlib.h> //para atoi()

/*
	Se imprime el resultado con printf()
	valor de retorno: int --> 0 en todos los casos
	Argumentos: 
	argc= 2, argv[0]="exe_name.bin", argv[1]="#"
	donde # representa un número entero
*/
int main (int argc, char *argv[])
{
	clock_t tiempo_inicio, tiempo_fin;
	double tiempo_usado = 0;
	unsigned int factorial = 1, contador = 0; 
	
	tiempo_inicio = clock(); //función para tomar reloj.
	/*inicio de proceso*/
	for (contador = atoi(argv[1]) ; contador > 0 ; contador-- )
		factorial *= contador;
	/*fin de proceso*/
	tiempo_fin = clock();
	tiempo_usado = (double)(tiempo_fin - tiempo_inicio) / CLOCKS_PER_SEC;

	printf ("\n\n\t %s! = %d\n\n",argv[1], factorial);

	printf ("El tiempo de ejecución del programa es: %f\n", tiempo_usado);
	
	return 0;
}
