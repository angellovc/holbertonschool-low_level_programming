#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 *append_text_to_file - add text at the end of an existing file
 *@filename: file name
 *@text_content: text
 *Return: 1 succes, -1 error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0, y = 0;

	if (filename == '\0')
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	while (text_content && text_content[i])
		i++;
	y = write(fd, text_content, i);
	if (y == -1)
		return (-1);
	return (1);
}
