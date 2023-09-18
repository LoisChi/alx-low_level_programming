#include "main.h"

/**
 * argstostr - Entry point
 * @ac: integer
 * @av: char
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	size_t length = 0;
	int i;
	size_t new_len = length + ac - 1;
	char *str = malloc((new_len + 1) * sizeof(char));
	size_t c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		length += strlen(av[i]);
	}
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		strcpy(str + c, av[i]);
		c += strlen(av[i]);
		if (i != ac - 1)
		{
			str[c] = '\n';
			c++;
		}
	}
	str[new_len] = '\0';
	return (str);
}
