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
	int  num, ans = 0, i;
	int change[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		ans += (num / change[i]);
		num -= ((num / change[i]) * change[i]);
	}
	printf("%d\n", ans);
	return (0);
}

