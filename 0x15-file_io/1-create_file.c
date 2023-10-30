#include "main.h"

/**
 * create_file - Entry point
 * @filename: file name
 * @text_content: terminated string
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int i, a;
	mode_t m = S_IRUSR | S_IWUSR;
	ssize_t t;

	if (filename == NULL)
		return (-1);
	i = open(filename, O_WRONLY | O_CREAT | O_TRUNC, m);
	if (i == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	t = 0;
	while (text_content[t] != '\0')
		t++;
	a = write(i, text_content, t);
	if (a == -1 || a != t)
	{
		close(i);
		return (-1);
	}
	close(i);
	return (1);
}
