#include "main.h"

/**
 * create_array - Entry point
 * @size: integer
 * @c: char
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *s = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
		return (NULL);

	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
