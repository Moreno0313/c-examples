#ifndef EJEMPLO_H //if not defined
	
	#define EJEMPLO_H

	#include <stdio.h>
	float sumar_valores (float num1, float num2);
	void mostrar_resultado (float result);
	void restar_valores (float num1, float num2, float *res);

	#define LOG_INFO(M, ...) fprintf(stderr, "[INFO] (%s:%d) " M "\n",\
        __FILE__, __LINE__, ##__VA_ARGS__)

	#define MULTIPLY(x) ((x) * 5)
	
	#define ABS(x) ((x) < 0 ? -(x) : (x))
	
	#define MIN(a, b) ((a) < (b) ? (a) : (b))

	
	#define PRINT1(m) printf(m)
	#define PRINT2(m) printf(#m)
	
	#define GLUE(x,y) x##y
	
#endif