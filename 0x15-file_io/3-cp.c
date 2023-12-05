#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdarg.h>
#include <sys/stat.h>
#include <stdio.h>
#define BUFF 1024
/**
 * closse - closes files
 * @fd: file description
 */
void closse(int fd)
{
	if (close(fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies teh content of a file to another file
 * @argc: argunent count
 * @argv: array of args
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i, j;
	ssize_t a, b;
	char buffer[BUFF];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	i = open(argv[1], O_RDONLY);
	if (i < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	j = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (j < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	while ((a = read(i, buffer, BUFF)) > 0)
	{
		b = write(j, buffer, a);
		if (b != a)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			closse(i);
			closse(j);
			exit(99);
		}
	}
	if (a < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		closse(i);
		closse(j);
		exit(98);
	}
	closse(i);
	closse(j);
	return (0);
}
