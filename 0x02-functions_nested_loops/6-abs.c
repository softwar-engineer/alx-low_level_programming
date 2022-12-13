#include "main.h"

/**
 * _abs - finds the absolute of a number
 * @n: type of arg passed from main function
 * Return: 0 if successful
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n == 0)
		return (0);
	else
		return (-n);
}
