#include "main.h"

/**
 * str_concat - Entry point
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	size_t c = strlen(s1);
	size_t d = strlen(s2);
	char *s = malloc(c + d + 1);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s == NULL)
		return (NULL);
	strcpy(s, s1);
	strcpy(s, s2);
	return (s);
}
