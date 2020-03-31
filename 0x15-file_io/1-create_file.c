#include "holberton.h"
#include<sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 *create_file -replace or make a new file and put text inside
 *@filename: name of the file
 *@text_content: text
 *Return: 1 succes, -1 error
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0, y = 0;

	if (filename == '\0')
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	while (text_content != '\0' && text_content[i] != '\0')
		i++;
	y = write(fd, text_content, i);
	if (y == -1)
		return (-1);
	return (1);
}
