#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: returns a pointer to the new location in memory
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, length, k, c = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i]; i++)
	{
	}
	for (j = 0; s2[j]; j++)
	{
	}
	j++;
	length = i + j;
	str = malloc(sizeof(char) * length);
	if (str == NULL)
		return (NULL);

	for (k = 0; k < length; k++)
	{
		if (k < i)
		{
			str[k] = s1[k];
		}
		else
		{
			str[k] = s2[c];
			c++;
		}
	}

	str[length] = '\0';

	return (str);
}
