#include <stdio.h>
/**
 * main - prints all possible different combinations of 3 digits using putchar
 *
 * Return:0
 */
int main(void)
{
	int i, j, k, l, flag;

	flag = 0;
	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = i; k <= '9'; k++)
			{
				for (l = j + 1; l <= '9'; l++)
				{
					if (flag)
					{
						putchar(',');
						putchar(' ');
					}
					flag = 1;
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
