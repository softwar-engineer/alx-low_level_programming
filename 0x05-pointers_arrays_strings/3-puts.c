#include "main.h"

/**
 * _puts - prints the string as it is to stdout
 * @str: arg from test function
 *
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
