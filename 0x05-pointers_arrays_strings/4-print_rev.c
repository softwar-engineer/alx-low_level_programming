#include "main.h"

/**
 * print_rev - prints in reverse
 * @s: arg from test function
 *
 */

void print_rev(char *s)
{
	int i, length;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	for (i = length - 1; s[i]; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
