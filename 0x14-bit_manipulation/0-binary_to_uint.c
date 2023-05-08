#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to uint
 *
 * @b: the string of binary numbers
 *Return: the converted numbers, or 0 on failing
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ans = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		ans = ans << 1;
		if (b[i] < '0' || b[i] > '9')
			return (0);
		ans += b[i] - '0';
	}
	return (ans);
}
