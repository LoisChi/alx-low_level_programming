#include "main.h"

/**
 * get_bit - Entry point
 * @n: num
 * @index: index
 * Return: index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	return ((n >> index) & 1);
}
