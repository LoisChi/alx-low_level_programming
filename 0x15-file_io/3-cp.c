#include "main.h"

/**
 * cp - Entry point
 * @file_from: param
 * @file_to: param
 * Return: copied file
 */
int cp(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, close_status;
	ssize_t bytes_read, bytes_written;
	char buffer[BUF_SIZ];

	if (file_from == NULL || file_to == NULL)
		return (97);
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		return (98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		close(fd_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		return (99);
	}
	while ((bytes_read = read(fd_from, buffer, BUF_SIZ)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			return (99);
		}
	}
	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		 dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		 return (98);
	}
	close_status = close(fd_from);
	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		return (100);
	}
	close_status = close(fd_to);
	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		return (100);
	}
	return (0);
}
