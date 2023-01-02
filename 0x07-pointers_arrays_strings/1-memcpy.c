#include "main.h"

/**
 * _memcpy - copies n bytes from memory area
 * @dest: destination area
 * @src: source area
 * @n: number of bytes to be copied
 * Return: returns the destination pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
