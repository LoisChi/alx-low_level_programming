#include "main.h"

/**
 * create_file - Entry point
 * @filename: filename
 * @text_content: terminated string
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0;
	ssize_t b = 0;

	if (filename == NULL)
		return (-1);
	i = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (i == -1)
		return (-1);
	if (text_content != NULL)
		b = write(i, text_content, strlen(text_content));
	close (i);
	if (b == -1 || (text_content != NULL && b != strlen(text_content)))
		return (-1);
	return (1);
}
