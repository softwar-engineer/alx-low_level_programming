#include "main.h"

/**
 * _strlen - computes the length of the string
 * @s: arg1 from test function
 * Return: 0 if successfully completed
 */

int _strlen(char *s)
{
	int i, length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
