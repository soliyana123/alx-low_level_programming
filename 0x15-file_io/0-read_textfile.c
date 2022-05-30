#include "main.h"
#include <stdio.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to text in a file
 * @letters: number of letters
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp = 0, r = 0, w = 0;
	char *buffer = NULL;

	if (filename)
	{
		buffer = malloc(sizeof(char) * letters);
		fp = open(filename, O_RDONLY);

		if (buffer && fp != -1)
		{
			r = read(fp, buffer, letters);
			w = write(STDOUT_FILENO, buffer, r);
		}

		close(fp);
		free(buffer);
	}

	return (w);
}
