#include "main.h"

/**
 * _realloc - Entry point
 * @ptr: pointer
 * @old_size: unsigned int
 * @new_size: unsigned int
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = (old_size < new_size) ? old_size : new_size;
	void *p = malloc(new_size);
	char *c = (char *)ptr;
	char *s = (char *)p;
	unsigned int a;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (p == NULL)
		exit(98);
	for (a = 0; a < i; a++)
		s[a] = c[a];
	free(ptr);
	return (p);
}
