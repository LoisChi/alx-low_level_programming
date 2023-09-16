#include "main.h"

/**
 * wildcmp - Entry point
 * @s1: char
 * @s2: char
 * Return: 0 or 1
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return ((*s1 == '\0') ? 1 : 0);
	else if (*s2 == '*')
	{
		while (*s1 != '\0')
		{
			if (wildcmp(s1, s2 + 1))
			{
				return (1);
			}
			s1++;
		}
		return (wildcmp(s1, s2 + 1));
	}
	else if (*s1 == '\0' || *s1 != *s2)
	{
		return (0);
	}
	else
		return (wildcmp(s1 + 1, s2 + 1));
}
