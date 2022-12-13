#include "main.h"

/**
 * times_table - displays numbers multiplied by 1 - 9
 *
 * Return: 0 if successful
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i * j) >= 10)
			{
				if (j == 9)
				{
					_putchar((i * j) / 10 + '0');
					_putchar((i * j) % 10 + '0');
				}
				else
				{
					_putchar((i * j) / 10 + '0');
					_putchar((i * j) % 10 + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				if (i < 2 && j == 9)
				{
					_putchar((i * j) + '0');
				}
				else
				{
					_putchar((i * j) + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
