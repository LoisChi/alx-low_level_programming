#include "main.h"

/**
 * flip_bits - Entry point
 * @n: num1
 * @m: num2
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int a = 0;
	unsigned long int b = n ^ m;

	while (b > 0)
	{
		a += b & 1;
		b >>= 1;
	}
	return (a);
}
