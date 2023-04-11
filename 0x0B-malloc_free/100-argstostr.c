#include "main.h"
#include <stdlib.h>

/**
 * argstostr -  a function that concatenates all the args of ur program.
 *
 * @ac: numbers of args
 * @av: array of arg strings
 * Return: a string of all args, or NULL
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
		{
		}
		k++;
	}
	k++;
	str = (char *) malloc(sizeof(char) * k);
	if (str == NULL)
	{
		return (NULL);
	}
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
		{
			str[k] = av[i][j];
		}
		str[k] = '\n';
		k++;
	}
	str[++k] = 0;
	return (str);
}
