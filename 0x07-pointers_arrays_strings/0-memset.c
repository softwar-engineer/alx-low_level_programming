#include "main.h"

/**
 * _memset - fills the memory with a constatnt byte
 * @s: reference argument
 * @b: characters to be filled in s
 * @n: the number of characters to be inserted in s
 * Return: 0 if successfully competed
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
