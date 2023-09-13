#include "main.h"

/**
 *print_alphabet_x10 - Entry point
 *
 *
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int letter = 'a';

	while (i < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
	_putchar('\n');
	letter = 'a';
	i++;
	}
}
