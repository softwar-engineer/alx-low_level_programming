#include "main.h"

/**
 * print_line - prints a line
 * @n: arg from main function
 * Return: 0 if successfully completed
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
