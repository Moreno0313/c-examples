/*
	Programa de ejemplo para ALSE-2 para mostrar apuntadores
	y funciones.
	Autor: 	  Nombre(s) de autor(es)
	Licencia: GPL V3 -- https://www.gnu.org/licenses/licenses.es.html
	Fecha:	  13 de febrero de 2022
	Versión:  1.0.0
*/

/*Directivas de preprocesamiento (MACROS)*/
#include<stdio.h> //inclusión de librería para entradas y salidas estándar
#include<stdint.h> //para intN_t y uintN_t 
#include<stdlib.h> //para atoi

#define MAX 30

/*Declaración de funciones (Prototipos)*/
size_t strlen(const char *s);
char *strncpy_a(char *dest, const char *src, size_t n);
char *strncpy_b(char dest[], const char src[], size_t n);//cuando se invoca la función, los tamñaos ya fueron reservados
char *strncpy_c(char *, const char *, size_t ); //en la declaración de la función se pueden especificiar solo los tipos de datos

/*
Función principal
*/
int main (int argc, char *argv[])
{
	const uint8_t pos = atoi(argv[2]);
	const uint8_t len_str = strlen(argv[1]);
	char arr_dest_p1[MAX] = {0}, arr_dest_p2[MAX] = {0};
	char *dest_addr;
	
	printf ("Dirección de argv[0]: %p\n", argv[0]);
	printf ("Dirección de argv[1]: %p\n", argv[1]);
	printf ("Dirección de argv[2]: %p\n", argv[2]);
	printf ("Dirección de arr_dest_p1: %p\n", arr_dest_p1);
	printf ("Dirección de arr_dest_p2: %p\n", arr_dest_p2);
	printf ("longitud de argv[1]: %d\n", len_str);
	
	
	if (len_str < pos)
		printf("\nla posición a dividir es mayor que la longitud del String %s\n",argv[1]);
	else
	{
		dest_addr = strncpy_b (arr_dest_p1, argv[1], pos);
		dest_addr = strncpy_a (arr_dest_p2, argv[1] + pos, len_str - pos);
		
		printf("\nResultado cadena con la primera parte: %s\n", arr_dest_p1);
		printf("Resultado cadena con la segunda parte: %s\n", arr_dest_p2);
	
	}
	return 0;
}

/* Fragment of a code of string.c
https://elixir.bootlin.com/linux/latest/source/lib/string.c
*/

/**
 * strlen - Find the length of a string
 * @s: The string to be sized
 */
size_t strlen(const char *s)
{
	const char *sc;

	for (sc = s; *sc != '\0'; ++sc)
		/* nothing */;
	return sc - s;
}

/*
A simple implementation of strncpy(). from strncpy manual page (man strncpy)
*/

/*"copies the string pointed to by src, including the terminating
null byte ('\0'), to the buffer pointed to by dest.  The strings
may not overlap, and the destination string dest must be large
enough to receive the copy.  Beware of buffer overruns!  (See BUGS.)"*/

char *strncpy_a(char *dest, const char *src, size_t n)
{
    size_t i;

    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
    for ( ; i < n; i++)
        dest[i] = '\0';

	return dest;
}

/*variation of strcpy_a() with same result*/
char *strncpy_b(char *dest, const char *src, size_t n)
{
    size_t i;

    for (i = 0; i < n && *(src + i) != '\0'; i++)
        *(dest + i) = *(src + i);
    for ( ; i < n; i++)
        *(dest + i) = '\0';

	return dest;
}


/* Fragment of a code of string.c
https://elixir.bootlin.com/linux/latest/source/lib/string.c
*/

/**
 * strncpy - Copy a length-limited, C-string
 * @dest: Where to copy the string to
 * @src: Where to copy the string from
 * @count: The maximum number of bytes to copy
 *
 * The result is not %NUL-terminated if the source exceeds
 * @count bytes.
 *
 * In the case where the length of @src is less than  that  of
 * count, the remainder of @dest will be padded with %NUL.
 *
 */
char *strncpy_c(char *dest, const char *src, size_t count)
{
	char *tmp = dest;

	while (count) {
		if ((*tmp = *src) != 0)
			src++;
		tmp++;
		count--;
	}
	return dest;
}


/*
int atoi(const char *nptr)
{
	int value;
		...
		...	 
	return value;
}

*/