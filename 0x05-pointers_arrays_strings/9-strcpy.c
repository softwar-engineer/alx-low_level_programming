#include "main.h"
/**
 * _strcpy - copy string
 * @src: arg1 from test func
 * @dest: arg2 from test func
 * Return: 0 if successfully completed
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
