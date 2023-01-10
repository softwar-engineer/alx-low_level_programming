#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - returns a pointer to a newly allocated location
 * @str: string to be copied and located
 * Return: returns a ponter to char
 */

char *_strdup(char *str)
{
	char *arr;
	int i, j;

	if (str == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
	{
	}
	j++;
	arr = malloc(sizeof(char) * j);
	if (arr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		arr[i] = str[i];
	}

	arr[i] = '\0';

	return (arr);
}
