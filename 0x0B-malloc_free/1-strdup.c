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

	if (str == NULL)
		return (NULL);

	arr = str;
	arr = malloc(sizeof(*str));

	return (arr);
}
