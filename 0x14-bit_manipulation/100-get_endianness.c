#include "main.h"

/**
 * get_endianness - check if the arch is little endian or big endian
 *
 * Return: 0 if big endian, 1 if little end
 */
int get_endianness(void)
{
	int x = 1;
	char *px = (char *)&x;

	return ((int) *px);
}
