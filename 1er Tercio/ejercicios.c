/*Encuentre la posisicón del caracter en el arreglo o 
diga si el carater no está*/

int main ()
{
	char caracter = 'r';
	char palabra1[MAX] = {"Mensaje de prueba"};
	int cant_car = 0, cont = 0;
	
	for (cont = 0 ; cont < MAX && palabra1[cont] != '\0' ; cont ++)
	{
		if (palabra1[cont] == caracter)
		{
			printf ("caracter %c encontrado en la posición %d\n", caracter, cont+1);
			cant_car++;
		}
	}
	if (cant_car == 0)
		printf("Caracter %c no encontrado en el arreglo \"%s\"\n",caracter,palabra1);
	else
		printf("Caracter %c encontrado %d veces en el arreglo \"%s\"\n",caracter,cant_car, palabra1);
}

/*Encuentre el promedio por cada fila*/
int main ()
{
	double datos[][] = {{2.5, 3.3, 2.7, 3.5,3.25, 2.45},{9.5, 5, 12.5, 10.75, 7, 8.9}};
	double promedio = 0;
	
	for (cont = 0 ; cont < 2 ; cont++)
	{
		for (cont2 = 0 ; cont2 < 6 ; cont++)
		{
			promedio += datos[cont][cont2];
		}
		printf("El promedio para la fila %d es: ", cont+1, promedio/6);
	}
}

/*
Computes double of a number.
Works by tripling the number, and then subtracting to get back to double.
*/
static int Twice(int num) {
	int result = num * 3;
	result = result - num;
	return(result);
}

int main()
{
	int num = 13;
	int a = 1;
	int b = 2;
	a = Twice(a); // call Twice() passing the value of a
	b = Twice(b + num); // call Twice() passing the value b+num
	// a == 2
	// b == 30
	// num == 13 (this num is totally independent of the "num" local to Twice()
	return 0;
}

void Swap(int x, int y) { // NO does not work
	int temp;
	temp = x;
	x = y; // these operations just change the local x,y,temp
	y = temp; // -- nothing connects them back to the caller's a,b
}

int main ()
{
	// Some caller code which calls Swap()...
	int a = 1;
	int b = 2;
	Swap(a, b);
}

static void Swap(int* x, int* y) { // params are int* instead of int
	int temp;
	temp = *x; // use * to follow the pointer back to the caller's memory
	*x = *y;
	*y = temp;
}
int main ()
{
	// Some caller code which calls Swap()...
	int a = 1;
	int b = 2;
	Swap(&a, &b);
}


	struct estructura_ejemplo1{
		char pal;		//1B
		float valor; 	//4B
	};
	
	union estructura_ejemplo2{
		char pal;		
		float valor; 	
	};

	int main (void)
	{
		struct estructura_ejemplo1 s_ej1;
		union estructura_ejemplo2 s_ej2;
		return 0;
	}
	
