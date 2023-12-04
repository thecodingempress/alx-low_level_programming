#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
/**
 * append_text_to_file - appends text at the end of the file
 * @filename: name of the file
 * @text_content: text to be appended
 *
 * Return: 1 on succes, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int u;
	ssize_t y, len;

	u = open(filename, O_APPEND);
	if (filename == NULL || u == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	len = 0;
	while (text_content[len] != '\0')
	{
		len++;
	}
	y = write(u, text_content, len);

	if (y == -1)
	{
		close(u);
		return (-1);
	}

	close(u);
	return (1);
}
