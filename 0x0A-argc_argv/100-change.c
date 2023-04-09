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
	int mainNum, num, ans = 0, i, j, min;
	int change[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	mainNum = atoi(argv[1]);
	if (mainNum < 0)
	{
		printf("0\n");
		return (0);
	}
	min = mainNum;
	for (i = 0; i < 5; i++)
	{
		num = mainNum;
		for (j = i; j < 5; j++)
		{
			ans += (num / change[j]);
			num -= ((num / change[j]) * change[j]);
		}
		if (ans < min)
			min = ans;
	}
	printf("%d\n", min);
	return (0);
}

