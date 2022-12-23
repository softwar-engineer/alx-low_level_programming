#include "main.h"

/**
 * _strncpy - concatnates strings
 * @dest: arg1 from test function
 * @src: arg2 from test function
 * @n: number of bytes to be concatinated
 * Return: 0 if successfully completed
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, length;

	for (length = 0; src[length] != '\0'; length++)
	{
	}
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	if (n > length)
	{
		dest[length] = '\0';
	}

	return (dest);
}
