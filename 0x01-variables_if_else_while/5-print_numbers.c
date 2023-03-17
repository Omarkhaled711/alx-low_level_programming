#include <stdio.h>
/**
 * main - print numbers starting from 0 to 9 using putchar
 *
 * Return:0
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
