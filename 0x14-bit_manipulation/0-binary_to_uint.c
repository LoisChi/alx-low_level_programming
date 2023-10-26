#include "main.h"

/**
 * binary_to_uint - Entry point
 * @b: char
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		i <<= 1;
		if (*b == '1')
			i += 1;
		b++;
	}
	return (i);

}
