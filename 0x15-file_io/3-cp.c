#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
/**
 *errors - print errors
 *@n: error number
 *@from: first file
 *@to: second file
 */
void errors(int n, char *from, char *to)
{
	if (n == 97)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);
	if (n == 98)
		dprintf(2, "Error: Can't read from file %s\n", from), exit(98);
	if (n == 99)
		dprintf(2, "Error: Can't write to %s\n", to), exit(99);
}
/**
 *main - copy a file content in another file
 *@ac: number of arguments
 *@av: arguments
 *Return: 0
 */
int main(int ac, char **av)
{
	int fd[2], readed = 0, writed = 0, c = 0;
	char buff[1024];

	if (ac != 3)
		errors(97, &*av[1], &*av[2]);
	fd[0] = open(&*av[1], O_RDONLY);
	if (fd[0] == -1)
		errors(98, &*av[1], &*av[2]);
	fd[1] = open(&*av[2], O_CREAT | O_WRONLY, 00664);
	if (fd[1] == -1)
		fd[1] = open(&*av[2], O_TRUNC | O_WRONLY);
	if (fd[1] == -1)
		errors(99, &*av[1], &*av[2]);
	do {
		readed = read(fd[0], buff, 1024);
		if (readed == -1)
			errors(99, &*av[1], &*av[2]);
		writed = write(fd[1], buff, readed);
		if (readed != writed)
			errors(99, &*av[1], &*av[2]);
	} while (readed > 0);
	c = close(fd[0]);
	if (c == -1)
		dprintf(2, "Error: Can't write to %i\n", fd[0]), exit(100);
	c = close(fd[1]);
	if (c == -1)
		dprintf(2, "Error: Can't write to %i\n", fd[1]), exit(100);
	return (0);
}
