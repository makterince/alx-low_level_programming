#include "main.h"
/**
 *create_buffer - creates buffer
 *@file: name of file
 *Return: 0
 *
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 *close_file - closes opened file
 *@fd: dhf
 *Return: 0
 *
 */
void close_file(int fd)
{
	int i;

	i = close(fd);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 *main - copies content of one file to another
 *@argc: parameter
 *@argv: parameter
 *Return: 0
 *
 */
int main(int argc, char *argv[])
{
	int initial, dest, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_initial file_dest\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	initial = open(argv[1], O_RDONLY);
	r = read(initial, buffer, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (initial == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(dest, buffer, r);
		if (dest == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(initial, buffer, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buffer);
	close_file(initial);
	close_file(dest);

	return (0);
}
