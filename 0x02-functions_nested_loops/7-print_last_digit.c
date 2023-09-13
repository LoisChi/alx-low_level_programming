#include "main.h"

/**
 *  print_last_digit - Entry point
 * @n: integer
 * Return: 0
 */
int print_last_digit(int n)
{
	int a = n % 10;

	_putchar(a + '0');
	return (0);
}
