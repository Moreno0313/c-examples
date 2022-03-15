#include "lib_ejemplo10.h"

int main()
{
	UINT_TYPE a = 71, b = 202, res = 0;
	
	res = and_bitwise_op (a, b);
	imprimir_resultado ((UINT_TYPE) res);
	res = xor_bitwise_op (a, b);
	imprimir_resultado ((UINT_TYPE) res);
	
}