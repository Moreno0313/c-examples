/*
	Programa de ejemplo para ALSE-2 que para
	ver tipos de variables portables enteras;
	ver tamaños de tipos de variables;
	mostrar la diferencia entre %c y %d; y 
	conversiones de tipos de variable
		
	Autor: 	  Nombre(s) de autor(es)
	Licencia: GPL V3 -- https://www.gnu.org/licenses/licenses.es.html
	Fecha:	  27 de enero de 2022
	Versión:  1.0.0
*/

#include<stdio.h> //inclusión de librería para entradas y salidas estándar
#include<stdint.h> //inclusión de librería para tipos enteros intN_t y uintN_t (c99 7.18)
/*
	solo se imprimen resultados con printf()
	valor de retorno: int --> 0 en todos los casos
	Argumentos: void
*/
int main (void)
{
	/*tipo de variable de 8 bits*/
	char variable1 = 0;		//entero de 8b CON signo
	int8_t variable2 = 0;	//entero de 8b CON signo
	unsigned char	 variable1_u = 0;	//entero de 8b SIN signo
	uint8_t variable2_u = 0;			//entero de 8b SIN signo
	
	/*tipo de variable de 16 bits*/
	short int variable3 = 0;
	unsigned short int variable3_u = 0;
	uint16_t variable4 = 0; //para entero de 16b SIN signo
	int16_t variable4_u = 0; //para entero de 16b CON signo
	
	/****************************************
	Parte de tamaños de variables
	*******************************************/
	/*Variable para guardar el resultado del operador sizeof()*/
	long unsigned int tamano_de_variable;
	long unsigned int tamano_de_otra_variable = sizeof(float);
	
	tamano_de_variable = sizeof(long double);
	
	/*Mostrar tamaño en Bytes de tipo de variable*/
	printf("el tamaño de una variable de tipo long double es: %ld\n", tamano_de_variable);
	printf("el tamaño de una variable de tipo double es: %ld\n", sizeof(double));
	printf("el tamaño de una variable de tipo float es: %ld\n", tamano_de_otra_variable);
	
	/****************************************
	Parte para aclaración de char para 
	valor entero vs ASCII. 
	https://datatracker.ietf.org/doc/html/rfc20
	*******************************************/
	variable1 = 'A'; //0b01000001 --> 0x41 --> 65
	variable2 = '!'; //0b00100001 --> 0x21 --> 33
	
	printf("\nimpresión de resultado de suma 'A' + '!' en decimal: %d\n", variable1 + variable2);
	printf("impresión de resultado de suma 'A' + '!' en ASCII: %c\n", variable1 + variable2);
	
	/****************************************
	Parte de conversiones - promotions
	ISO/IEC 9899:1999 - 6.3
	*******************************************/
	variable1 = 30;
	variable2 = 40;
	
	/* (6.3.1.1) If an int can represent all values of the original type, 
	the value is converted to an int; otherwise, it is converted
	to an unsigned int. These are called the integer promotions*/
	char resultado1 = (variable1 * variable2) / 10 ; 	//conversión implícita
														//el 10 está "Hardcoded" 
	printf ("el resultado de (30 * 40) / 10 es: %d\n", resultado1);
	
	/* (6.3.1.4) When a finite value of real floating type is converted to an 
	integer type other than _Bool, the fractional part is discarded*/
	float  valor_frac1 = 12344.2233442233;
	double valor_frac2 = 12344.2233442233;
	variable4_u = valor_frac2;
	
	printf ("\nValor real punto flotante (float):  %f\n", valor_frac1); //error de redondeo
	printf ("Valor real punto flotante (double): %f\n", valor_frac2); //%.10f
	printf ("valor de variable4_u (int16_t): %d\n", variable4_u);
	
	/* (6.5.4) conversión explícita - Cast*/
	variable3 = 36;
	variable4_u = 7;
	double valor_frac3;
	
	valor_frac3 = variable3 / variable4_u;
	printf ("\nvalor resultado sin cast: %f\n", valor_frac3);

	valor_frac3 = (double) variable3 / variable4_u; // cast has precedence over division
	printf ("valor resultado con cast: %f\n", valor_frac3);	
	
	return 0;
}
