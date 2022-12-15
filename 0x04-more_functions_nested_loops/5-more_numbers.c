#include "main.h"

/**
 * more_numbers - prints 1 t0 14 10 times
 *
 * Return: 0 if completed successfully
 */

void more_numbers(void)
{
	int i, k;

	for (i = 0; i < 10; i++)
	{
		for (k = 1; k < 15; k++)
		{
			if (k > 9)
			{
				_putchar(k / 10 + '0');
			}

			_putchar(k % 10 + '0');
		}
		_putchar('\n');
	}
}
