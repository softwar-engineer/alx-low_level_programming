#include "main.h"

/**
 * print_number - prints the given number
 * @n: argument passed from the main function
 * Return: 0 if completed successfully
 */

void print_number(int n)
{
	if (n > 0)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
}
