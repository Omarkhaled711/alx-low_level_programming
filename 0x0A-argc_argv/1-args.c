#include <stdio.h>

/**
 * main - Entry point
 * @argc: the number of arguments passed through the command line
 * @argv: an array of strings contains the arguments passed to the command line
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

