#include <stdio.h>
#include <stdlib.h>

/**
 * checkNum - checks if a string contains numbers only or not
 *
 * @s: the string to check
 * Return: 1 if it only contains digits, 0 otherwise
 */

int checkNum(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (0);
		}
	}
	return (1);
}
/**
 * main - Entry point
 * @argc: the number of arguments passed through the command line
 * @argv: an array of strings contains the arguments passed to the command line
 * Return: 0 in success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int sum = 0, i;

	for (i = 1; i < argc; i++)
	{
		if (checkNum(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

