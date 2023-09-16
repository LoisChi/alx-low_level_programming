#include "main.h"

/**
 * _sqrt_recursion - prints the natural square root of a number
 * @n: integer param
 * @a: sqrt
 * Return: n
 */
int _sqrt_recursion(int n, int a)
{
	int square = a * a;

	if (square > n)
		return (-1);
	if (square == n)
		return (a);
	return (_sqrt_recursion(n, a + 1));
}
