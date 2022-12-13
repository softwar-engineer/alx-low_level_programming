#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: arg passed from main function
 * Return: 0 if successful
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = (-1 * (n % 10));
		_putchar(last_digit + '0');
		return (last_digit);
	}
	else
	{
		last_digit = n % 10;
		_putchar(n + '0');
		return (last_digit);
	}
}
