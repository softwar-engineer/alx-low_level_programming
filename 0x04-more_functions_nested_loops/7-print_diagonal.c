#include "main.h"

/**
 * print_diagonal - prints diagonal line using backslash
 * @n: arg from main function
 * Return: 0 if successfully completed
 */

void print_diagonal(int n)
{
	int i, k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (k = 1; k < i; k++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
