#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int i = 0;

	if (ac != 3)
	{
		write(2, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	i = _cp(&*av[1], &*av[2]);
}
int _cp(char *file_from, char *file_to)
{
	int fd[2], i = 0, y = 1, buf_size = 1024;
	char buffer[1024];
	char *str;

	fd[0] = open_files(file_from, '\0');
	fd[1] = open_files('\0', file_to);
	while (y < buf_size)
	{
		y = read(fd[0], buffer, buf_size);
		if (y == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		i = i + y;
		printf("y = %i\n", y);
		if (y < buf_size)
			break;
		buf_size += 1024;
	}
	str = malloc(sizeof(char) * i);
	if (str == '\0')
		return (-1);
}
int open_files(char *file_from, char *file_to)
{
	int fd[2];

	if (file_from != '\0')
	{
		fd[0] = open(file_from, O_RDONLY);
		if (fd[0] == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		else
			return (fd[0]);
	}
	if (file_to != '\0')
	{
		fd[1] = open(file_to, O_CREAT, 0664);
		if (fd[1] == -1)
		{
			fd[1] = open (file_to, O_TRUNC);
			if (fd[1] == -1)
				return (-1);
			else
				return (fd[1]);
		}
		else
			return (fd[1]);
	}
	return (-1);
}
