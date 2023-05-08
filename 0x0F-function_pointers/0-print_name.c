#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints the string given in a custom chosen way
 * @name: the string to print
 * @f: the function pointer that specifies the format
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
