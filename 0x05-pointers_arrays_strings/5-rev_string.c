#include "main.h"

/**
 * rev_string - reverses a string
 * @s: arg from test function
 *
 */

void rev_string(char *s)
{
	int i, length;

	for (length = 0; s[length] != '\0'; length++)
	{
	}
	for (i = length - 1; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}
}
