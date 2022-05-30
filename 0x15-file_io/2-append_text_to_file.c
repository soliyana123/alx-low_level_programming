#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 *
 * @s: pointer to an string
 * Return: int
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i += 1;
	}
	return (i);
}

/**
 * append_text_to_file - appends text
 * @filename: the file
 * @text_content: string in the file
 * Description: Function that append a file
 * Return: -1 or 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fd_write;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	fd_write = write(fd, text_content, _strlen(text_content));
	close(fd);
	if (fd_write == -1)
		return (-1);
	return (1);
}
