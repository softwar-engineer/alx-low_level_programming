#include "main.h"

/**
 * rev_string - reverses a string
 * @s: arg from test function
 *
 */

void rev_string(char *s)
{
	int i, length, x;

	for (length = 0; s[length] != '\0'; length++)
	{
	}
	x = length - 1;
	i = 0;
	while (x > i)
	{
		char x1, x2;

		x1 = s[x];
		x2 = s[i];
		s[i] = x1;
		s[x] = x2;
		i++;
		x--;
	}

}
