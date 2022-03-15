#include "../include/ejemplo.h"

float sumar_valores (float num1, float num2)
{
        return (num1+num2);
}
void restar_valores (float num1, float num2, float *res)
{
        *res = num1 - num2;
}
void mostrar_resultado (float result)
{
        printf("\n\n\tEl resultado es:  %f\n\n",result);
}


int sum_chars(char *chars)
{
	if ((*chars) == '\0') return 0;

	return sum_chars(chars + 1) + (*chars);
}


