#include "main.h"
#include <stddef.h>
/**
 * create_file - creates file
 * @filename: name of file
 * @text_content: content of file
 * Return: 1 on success, else -1
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t o, w, i = 0;

	if (filename == NULL)
		return (0);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, i);

	if (o == -1 || w == -1)
	{
		return (-1);
	}
	close(o);
	return (1);
}
