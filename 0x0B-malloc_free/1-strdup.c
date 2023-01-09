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
	int i;

	if (str == NULL)
		return (NULL);
	arr = malloc(sizeof(*str));

	for (i = 0; i != '\0'; i++)
	{
		arr[i] = str[i];
	}

	arr[i] = '\0';

	return (arr);
}
