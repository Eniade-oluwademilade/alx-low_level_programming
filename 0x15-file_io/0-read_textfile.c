#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads text file
 * @filename: name of file
 * @letters: number of letters to read
 * Return: 'letters' or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, o, w;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(o);

	return (w);
}
