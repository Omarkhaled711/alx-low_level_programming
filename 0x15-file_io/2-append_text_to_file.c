#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - as the name suggests
 *
 * @filename: the file name
 * @text_content: the text to add
 * Return: 1 on success, 0 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wt, len;

	if (filename == NULL)
		return (-1);
	for (len = 0; text_content != NULL && text_content[len]; len++)
	{
	}
	op = open(filename, O_WRONLY | O_APPEND);
	if (op == -1)
		return (-1);
	wt = write(op, text_content, len);
	if (wt == -1)
		return (-1);
	close(op);
	return (1);
}
