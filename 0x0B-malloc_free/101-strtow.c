#include "main.h"
#include <stdlib.h>

/**
 * copyString - copies a string up to a specified number of bytes
 *
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of bytes to copy
 *
 * Return: a pointer to the destination string
 */
void copyString(char *dest, const char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
}
/**
 * count_words - Counts the number of words in the given string.
 *
 * @str: The input string.
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int i, count = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			continue;
		count++;
		while (str[i] && str[i] != ' ')
			i++;
		if (str[i] == 0)
			break;
	}
	return (count);
}

/**
 * strtow - a function that splits a string into words.
 *
 * @str: a string to check
 * Return: array of strings, or NULL
 */
char **strtow(char *str)
{
	int i, j, count = 0;
	char **arrStr;

	if (str == NULL)
		return (NULL);
	count = count_words(str);
	arrStr = (char **) malloc(sizeof(char *) * (count + 1));
	if (count == 0 || arrStr == NULL)
		return (NULL);
	count = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			continue;
		j = 0;
		while (str[i + j] && str[i + j] != ' ')
			j++;
		arrStr[count] = (char *) malloc(sizeof(char) * (j + 1));
		if (arrStr[count] == NULL)
		{
			for (j = 0; j < count; j++)
				free(arrStr[j]);
			free(arrStr);
			return (NULL);
		}
		copyString(arrStr[count], str + i, j);
		arrStr[count][j] = 0;
		count++, i += j;
		if (str[i] == 0)
			break;
	}
	arrStr[count] = NULL;
	return (arrStr);
}
