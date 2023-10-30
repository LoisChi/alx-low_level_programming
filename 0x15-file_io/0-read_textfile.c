#include "main.h"

/**
 * read_textfile - Entry point
 * @filename: param
 * @letters: param
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t a, b;
	char *c;

	if (filename == NULL)
		return (0);
	c = malloc(sizeof(char) * letters);
	if (c == NULL)
		return (0);
	i = open(filename, O_RDONLY);
	if (i == -1)
	{
		free(c);
		return (0);
	}
	a = read(i, c, letters);
	if (a == -1)
	{
		free(c);
		close(i);
		return (0);
	}
	b = write(STDOUT_FILENO, c, a);
	if (b == -1 || b != a)
	{
		free(c);
		close(i);
		return (0);
	}
	free(c);
	close(i);
	return (b);
}
