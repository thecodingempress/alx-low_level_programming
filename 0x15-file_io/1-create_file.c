#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
/**
 * create_file - creates a file
 * @filename: pointer to filename
 * @text_content: a null-terminatedtring to be
 * written in the file created
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int j, l;
	ssize_t i;

	if (filename == NULL)
		return (-1);

	j = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (j == -1)
	{
		return (-1);
	}

	l = 0;
	while (text_content[l] != '\0')
	{
		l++;
	}

	i = write(j, text_content, l);
	if (i == -1)
	{
		close(j);
		return (-1);
	}

	close(j);
	return (1);
}
