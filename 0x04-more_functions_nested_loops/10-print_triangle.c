#include "main.h"

/**
 * print_triangle - prints a triangle using #
 * @size: arg from main function
 * Return: 0 if succesfully completed
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size; j > 1; j--)
			{
				_putchar(32);
			}
			_putchar('#');
		}
		_putchar('\n');
	}
}
