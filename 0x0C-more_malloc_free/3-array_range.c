#include "main.h"

/**
 * array_range - Entry point
 * @min: int
 * @max: int
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int a = max - min + 1;
	int *i = malloc(a * sizeof(int));
	int b;

	if (min > max)
		return (NULL);
	if (i == NULL)
		return (NULL);
	for (b = 0; b < a; b++)
		i[b] = min + b;
	return (i);
}
