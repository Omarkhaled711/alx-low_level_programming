#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: the number of arguments passed through the command line
 * @argv: an array of strings contains the arguments passed to the command line
 * Return: 0 in success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	prod = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", prod);
	return (0);
}

