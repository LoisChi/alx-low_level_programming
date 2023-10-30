#include "main.h"

/**
 * append_text_to_file - Entry point
 * @filename: file name
 * @text_content: param
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, b;
	ssize_t t;

	if (filename == NULL)
		return (-1);
	i = open(filename, O_WRONLY | O_APPEND);
	if (i == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(i);
		return (1);
	}
	t = 0;
	while (text_content[t] != '\0')
		t++;
	b = write(i, text_content, t);
	if (b == -1 || b != t)
	{
		close(i);
		return (-1);
	}
	close(i);
	return (1);
}
