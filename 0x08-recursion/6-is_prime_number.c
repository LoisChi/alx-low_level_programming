#include "main.h"

/**
 * is_prime_number - Entry point
 * @n: integer
 * @i: param
 * Return: 0 or 1
 */
int is_prime_number(int n, int i)
{
	if (n <= 2)
		return ((n == 2) ? 1 : 0);
	else if (n % i == 0)
		return (0);
	else if (i * i > n)
		return (1);
	else
		return (is_prime_number(n, i + 2));
}
