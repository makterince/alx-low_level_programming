#include "main.h"
/**
 *read_textfile - reads text file and prints into POSIX
 *@filename: name
 *@letters: letters/ words
 *Return: words
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buff;

	o = open(filename, O_RDONLY);
	r = read(o, buff, letters);
	w = write(STDOUT_FILENO, buff, r);
	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	if (o == -1 || r == -1 || w != r)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(o);

	return (w);
}
