#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - eads a text file and prints it to the POSIX stdout
 *
 * @filename: the file name
 * @letters: the number of letters
 * Return: the number of letters written to the stdout, or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t op, rd, wt;

	buff = malloc(letters);
	if (filename == NULL || buff == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);
	rd = read(op, buff, letters);
	wt = write(STDOUT_FILENO, buff, rd);
	if (rd == -1 || wt != rd)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(op);
	return (wt);
}
