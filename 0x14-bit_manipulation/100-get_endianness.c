#include "main.h"

/**
 * get_endianness - Entry point
 *
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *c = (char *) &n;

	return ((int)*c);
}
