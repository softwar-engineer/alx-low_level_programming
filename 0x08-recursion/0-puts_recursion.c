#include "main.h"

/**
 * _puts_recursion - recursion function
 * @s: passed string
 * Return: returns the string to the standard output
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

