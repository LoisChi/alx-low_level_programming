#include "variadic_functions.h"

/**
 * sum_them_all - Entry point
 * @n: integer
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list args;
	unsigned int m;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	for (m = 0; m < n; m++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
