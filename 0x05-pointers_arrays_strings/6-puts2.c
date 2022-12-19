#include "main.h"

/**
 * puts2 - prints characters
 * @str: arg from test function
 * 
 */

void puts2(char *str)
{
	int i, length;

	for (i = 0; str[i] != '\0'; i+=2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
