#include "main.h"

/**
 * read_textfile - Entry point
 * @filename: char param
 * @letters: number of letters
 * Return: actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a = 0;
	char *c = malloc(sizeof(char) * letters);
	FILE *file = fopen(filename, "r");
	ssize_t b = fwrite(c, sizeof(char), a, stdout);

	if (filename == NULL || c == NULL)
		return (0);
	a = fread(c, sizeof(char), letters, file);
	fclose(file);
	if (a == 0)
		return (0);
	if (b != a)
		return (0);
	return (b);
}
