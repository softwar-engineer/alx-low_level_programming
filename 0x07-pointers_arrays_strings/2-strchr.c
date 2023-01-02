#include "main.h"
#include <stddef.h>

/**
 * _strchr - return the first occurrence of a character
 * @s: reference string to be checked in
 * @c: character to be checked
 * Return: returns the address of the first occurrence of the char
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		else (s[i] != c && s[i] == '\0')
		{
			return (NULL);
		}
	}

	return (0);
}
