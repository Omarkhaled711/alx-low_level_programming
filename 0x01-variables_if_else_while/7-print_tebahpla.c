#include <stdio.h>
/**
 * main - print alphabet (lowercase) in reverse using putchar
 *
 * Return:0
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
