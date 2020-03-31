#include "holberton.h"
#include <stdio.h>
#include<sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *str;
	size_t i = 0;

	if (filename == '\0')
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	str = malloc(letters);
	if (str == '\0')
		return (0);
	i = read (fd, str, letters);
	if (i < letters)
	{
		free(str);
		return (0);
	}
	write(0, str, letters);
	close(fd);
	free(str);
	return (i);
}
