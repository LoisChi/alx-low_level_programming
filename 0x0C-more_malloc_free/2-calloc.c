#include "main.h"

/**
 * _calloc - Entry point
 * @nmemb: int
 * @size: int
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a = nmemb * size;
	void *ptr = malloc(a);
	unsigned int b;

	if (ptr == NULL)
		return (NULL);
	for (b = 0; b < a; b++)
		*((char *)ptr + b) = 0;
	return (ptr);
}
