#include "main.h"

/**
 * string_nconcat - Entry point
 * @s1: char 1
 * @s2: char 2
 * @n: unsigned int
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = (s1 == NULL) ? 0 : strlen(s1);
	unsigned int b = (s2 == NULL) ? 0 : strlen(s2);
	char *s = malloc(a + n + 1);

	if (n >= b)
		n = b;

	if (s == NULL)
		return (NULL);
	memcpy(s, s1, a);
	memcpy(s + a, s2, n);
	s[a + n] = '\0';
	return (s);
}
