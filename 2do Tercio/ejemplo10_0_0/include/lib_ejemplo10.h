#ifndef EJEMPLO10_H //if not defined,
#define EJEMPLO10_H //define it

#include <stdio.h>
#include <stdint.h>
	#define CONFIG_TAM_ENTERO
	//#define TAM_ENTERO_32
	
	#ifdef CONFIG_TAM_ENTERO
		#define TIPO_HARDWARE 1 
	#else
		#define TIPO_HARDWARE 0
	#endif

	#if TIPO_HARDWARE == 1
		uint8_t and_bitwise_op(uint8_t, uint8_t);
		#define UINT_TYPE uint8_t
	
	#elif TIPO_HARDWARE == 2
		uint16_t and_bitwise_op(uint16_t, uint16_t);
		#define UINT_TYPE uint16_t
	
	#else
		uint32_t and_bitwise_op(uint32_t, uint32_t);
		#define UINT_TYPE uint32_t
		
	#endif
	
	UINT_TYPE xor_bitwise_op (UINT_TYPE, UINT_TYPE);
	void imprimir_resultado (uint32_t);
	
#endif