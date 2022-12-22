#include "main.h"

/**
 * _strncat - concatnates strings
 * @dest: arg1 from test function
 * @src: arg2 from test function
 * @n: number of bytes to be concatinated
 * Return: 0 if successfully completed
 */

char *_strncat(char *dest, char *src, int n)
{
	int j = 0, dest_length;

	for (dest_length = 0; dest[dest_length] != '\0'; dest_length++)
	{
	}
	/*
	*for (src_length = 0; src[src_length] != '\0'; src_length++)
	*{
	*}
	*/
	while (src[j] != '\0' && j < n)
	{
		dest[dest_length + j] = src[j];
		j++;
	}

	dest[dest_length + j] = '\0';

	return (dest);
}
