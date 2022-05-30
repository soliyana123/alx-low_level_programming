#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fp = 0, w = -1;

	if (filename)
	{
		fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
		for (w = 0; text_content && text_content[w]; w++)
			;

		if (!text_content)
			text_content = "";

		if (fp != -1)
		{
			w = write(fp, text_content, w);
			close(fp);
		}
		else
			w = -1;
	}

	return (w != -1 ? 1 : w);
}
