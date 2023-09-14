#include "variadic_functions.h"

/**
 * print_strings - Entry point
 * @separator: char
 * @n: int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int m;
	char *str;

	va_start(args, n);
	m = 0;
	while (m < n)
	{
		str = va_arg(args, char*);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (m != (n - 1) && separator != NULL)
			printf("%s", separator);
		m++;
	}
	printf("\n");
	va_end(args);
}
