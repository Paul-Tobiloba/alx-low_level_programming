#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: string to be duplicated.
 *
 * Return: String duplicated
 */
char *_strdup(char *str)
{
	char *arr;
	unsigned int i, size = 0;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;

	arr = malloc(sizeof(char) * (size + 1));

	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
		arr[i] = str[i];
	return (arr);
}
