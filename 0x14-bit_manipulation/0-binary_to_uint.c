#include "main.h"

/**
 * binary_to_uint - Entry point
 * @b: char
 * Return: num or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if  (*b != '0' && *b != '1')
			return (0);
		n <<= 1;
		n += (*b - '0');
		n++;
	}
	return (n);
}
