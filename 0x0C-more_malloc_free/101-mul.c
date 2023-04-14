#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: the string to find its length
 * Return: the length of s
 */
int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; s[i]; i++)
	{
		len++;
	}
	return (len);
}
/**
 * _strdup -  a function that creates a string which contains a copy
 *		of the one given as a parameter.
 *
 * @str: the char to use to fill the array
 * Return: a pointer to str, or NULL if it fails
 */
char *_strdup(char *str)
{
	int i;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
	}
	i++;
	s = (char *) malloc(sizeof(char) * i);
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] ; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
/**
 * multiply - Multiply two strings of digits
 *
 * @s1: The first string of digits
 * @s2: The second string of digits
 *
 * Return: A string with the result of the multiplication
 */
char *multiply(char *s1, char *s2)
{
	int len1 = _strlen(s1), len2 = _strlen(s2), carry, i, j;
	int digit1, digit2, product;
	char *result = malloc((len1 + len2 + 1) * sizeof(char));
	char *p, *final_result;

	for (i = 0; i < (len1 + len2); i++)
		result[i] = '0';
	result[len1 + len2] = 0;
	if (result == NULL)
		return (NULL);
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			digit1 = s1[i] - '0';
			digit2 = s2[j] - '0';
			product = digit1 * digit2 + carry + result[i + j + 1] - '0';
			carry = product / 10;
			result[i + j + 1] = '0' + (product % 10);
		}
		result[i] += carry;
	}

	/* Remove leading zeros */
	p = result;
	while (*p == '0' && *(p + 1) != '\0')
		p++;
	/* Copy result to a new string */
	final_result = _strdup(p);

	free(result);
	return (final_result);
}
/**
 * _puts - a function that prints  a string.
 *
 * @str: the string to print
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**
 * main - Entry point
 *
 * @argc: no. of arguments for main
 * @argv: arguments for main
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *result;
	int i, j;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}
	for (i = 1; i < 3; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0'  || argv[i][j] > '9')
			{
				_puts("Error");
				exit(98);
			}
		}
	}
	result = multiply(argv[1], argv[2]);
	if (result == NULL)
	{
		_puts("Erro");
		exit(98);
	}
	_puts(result);
	free(result);
	return (0);
}

