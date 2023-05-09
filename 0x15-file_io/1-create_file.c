#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file and write in it
 *
 * @filename: the name of the file
 * @text_content: the text to write
 * Return: 1 on success -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int op, wt, len;

	if (filename == NULL)
		return (-1);
	for (len = 0; text_content != NULL && text_content[len]; len++)
	{
	}
	op = open(filename, O_CREAT | O_WRONLY |  O_TRUNC, 0600);
	if (op == -1)
		return (-1);
	wt = write(op, text_content, len);
	if (wt == -1)
		return (-1);
	close(op);
	return (1);
}
