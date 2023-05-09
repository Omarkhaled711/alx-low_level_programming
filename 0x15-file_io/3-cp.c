#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * print_usage_error_and_exit - Prints an error message and exits with 97
 * Return: void
 */
void print_usage_error_and_exit(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
/**
 * print_read_error_and_exit - Prints an error message and exits with 98
 * @filename: The name of the file that couldn't be read
 * Return: void
 */
void print_read_error_and_exit(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}
/**
 * print_write_error_and_exit - Prints an error message and exits with 99
 * @filename: The name of the file that couldn't be written to
 * Return: void
 */

void print_write_error_and_exit(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", filename);
	exit(99);
}
/**
 * print_close_error_and_exit - Prints an error message and exits with 100
 * @fd: The file descriptor that couldn't be closed
 * Return: void
 */
void print_close_error_and_exit(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * main - copies the contents of a file to another file.
 * @argc: number of arguments passed
 * @argv: array of strings  to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int op1, op2, rd1, wt2;
	char buff[1024];

	if (argc != 3)
		print_usage_error_and_exit();
	op1 = open(argv[1], O_RDONLY);
	if (op1 == -1)
		print_read_error_and_exit(argv[1]);
	op2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (op2 == -1)
		print_write_error_and_exit(argv[2]);
	while ((rd1 = read(op1, buff, 1024)) > 0)
	{
		wt2 = write(op2, buff, rd1);
		if (wt2 == -1 || wt2 != rd1)
			print_write_error_and_exit(argv[2]);
	}
	if (rd1 == -1)
		print_read_error_and_exit(argv[1]);
	if (close(op1) == -1)
		print_close_error_and_exit(op1);
	if (close(op2) == -1)
		print_close_error_and_exit(op2);
	return (0);
}
