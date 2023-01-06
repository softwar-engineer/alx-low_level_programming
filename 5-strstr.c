#include "main.h"

/**
 * _strstr - returns a matched substring
 * @haystack: string constant to be searched in
 * @needle: test string
 * Return: returns pointer to matched character
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j] && haystack[j] != ' ')
			{
				return (needle + i);
			}
		}
	}
	return (0);
}
