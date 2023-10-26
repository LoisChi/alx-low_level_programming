#include "main.h"

/**
 * print_binary - Entry point
 * @n: int
 * Return: binary representation of a number.
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 1;

	i <<= (sizeof(unsigned long int) * 8) - 1;

	while (i > 0)
	{
		if ((n & i) == 0)
			_putchar('0');
		else
			_putchar('1');
		i >>= 1;
	}
}
