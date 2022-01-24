/*
	Programa de ejemplo para ALSE-2 que consiste 
	en mostrar el resultado de sumar dos números
	enteros ingresados por el usuario mediante scanf.
	
	Autor: 	  Nombre(s) de autor(es)
	Licencia: GPL V3 -- https://www.gnu.org/licenses/licenses.es.html
	Fecha:	  24 de enero de 2022
	Versión:  1.0.0
*/

#include<stdio.h> //inclusión de librería para entradas y salidas estándar

/*
	Función principal donde se leen los valores
	ingresados por el usuario con la función scanf(),
	se suman y se imprime el resultado con printf()
	valor de retorno: int --> 0 en todos los casos
	Argumentos: void
*/
int main (void)
{
	/*variables enteras para los operandos y
	resultado de la suma*/
	int valor1 = 0 , valor2 = 0, resultado = 0 ;
	
	/*Mensaje de bienvenida al usuario*/
	printf("\n\nEste programa consiste"); 
	printf(" en mostrar\n");
	printf("el resultado de sumar dos números enteros.\n\n");
	
	//Pedir el primer número entero al usuario
	printf("Ingrese el primer operando de la suma: ");
	scanf("%d", &valor1);
	
	//Pedir el segundo número entero al usuario
	printf("Ingrese el segundo operando de la suma: ");
	scanf("%d", &valor2);	
	
	//realización de operación y asignación de resultado
	resultado = valor1 + valor2;
	
	//Imprimir resultado de operación en pantalla
	printf("\nResultado de la operación:\n\n \t\t%d + %d = %d\n\n", valor1, valor2, resultado);
	
	return 0;
}