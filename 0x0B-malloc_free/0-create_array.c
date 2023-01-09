#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: character to initialize array
 * Return: returns 0 if not NULL
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int j;

	str = malloc(sizeof(*str) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
	{
		str[j] = c;
	}
	return (str);
}
