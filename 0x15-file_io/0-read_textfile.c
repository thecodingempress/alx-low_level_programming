#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
/**
 * read_textfile - reads a text fie and prints it to POSIX
 * standard output
 * @filename: name of file in question
 * @letters: number of letters it should read and print
 *
 * Return: teh actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t i, k;
	int j;

	buf = malloc(sizeof(char) * letters);
	if (filename == NULL || buf == NULL)
		return (0);
	j = open(filename, O_RDONLY);
	if (j == -1)
	{
		free(buf);
		return (0);
	}
	i = read(j, buf, letters);
	if (i == -1)
	{
		close(j);
		free(buf);
		return (0);
	}
	k = write(1, buf, i);
	if (k == -1 || k != i)
	{
		close(j);
		free(buf);
		return (0);
	}
	close(j);
	free(buf);
	return (k);
}
