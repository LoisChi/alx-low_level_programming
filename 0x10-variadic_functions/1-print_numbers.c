#include "variadic_functions.h"

/**
 * print_numbers - Entry point
 * @n: int
 * @separator: char
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int m = 0;

	va_start(args, n);
	while (m < n)
	{
		printf("%d", va_arg(args, unsigned int));
		if (m != n - 1 && separator != NULL)
			printf("%s", separator);
		m++;
	}
	va_end(args);
	printf("\n");
}
