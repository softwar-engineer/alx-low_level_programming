#include "main.h"
/**
 * _strcmp - compares strings
 * @s1: arg1 from test function
 * @s2: arg2 from test function
 * Return: 0 if completed successfully
 */

int _strcmp(char *s1, char *s2)
{
	int length1, length2;

	for (length1 = 0; s1[length1] != '\0'; length1++)
	{
	}
	for (length2 = 0; s2[length2] != '\0'; length2++)
	{
	}
	if (length1 > length2)
	{
		return (1);
	}
	else if (length1 < length2)
	{
		return (-1);
	}
	else if (length1 == length2)
	{
		return (0);
	}
	return (0);
}
