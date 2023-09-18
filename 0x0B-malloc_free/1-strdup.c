#include "main.h"

/**
 * _strdup - Entry point
 * @str: string
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *s = malloc(strlen(str) + 1);

	if (str == NULL)
		return (NULL);
	if (s == NULL)
		return (NULL);
	strcpy(s, str);
	return (s);
}
