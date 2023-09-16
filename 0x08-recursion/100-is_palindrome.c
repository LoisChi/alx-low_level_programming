#include "main.h"

/**
 * is_palindrome - Entry point
 * @s: char
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int i = strlen(s);

	if (i <= 1)
	{
		return (1);
	}
	else if (s[0] != s[i - 1])
	{
		return (0);
	}
	else
	{
		(s[i - 1] = '\0');
		return (is_palindrome(s + 1));
	}
}
