#include "main.h"

/**
 * puts_half - puts half of the string given
 * @str: arg from test func
 *
 */

void puts_half(char *str)
{
	int i, length;

	for (length = 0; str[length] != '\0'; length++)
	{
	}

	if ((length + 1) % 2 == 0)
	{
		for (i = (length + 1) / 2; i < length; i++)
		{
			_putchar(str[i]);
		}
	}

	else
	{
		for (i = ((length) / 2); i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
