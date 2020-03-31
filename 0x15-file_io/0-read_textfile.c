#include "holberton.h"
#include<sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 *read_textfile - print a number of letters into a file
 *@filename: name of the file
 *@letters: number of letters
 *Return: return the number of letters printed
 */
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
	write(STDOUT_FILENO, str, letters);
	close(fd);
	free(str);
	return (i);
}
