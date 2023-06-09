#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	unsigned long dp[52];
	int i;

	dp[0] = 1;
	dp[1] = 2;
	for (i = 2; i < 50; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	for (i = 0; i < 49 ; i++)
	{
		printf("%lu, ", dp[i]);
	}
	printf("%lu\n", dp[49]);
	return (0);
}
