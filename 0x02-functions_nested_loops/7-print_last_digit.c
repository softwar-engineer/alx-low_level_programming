#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: arg passed from main function
 * Return: 0 if successful
 */

int print_last_digit(int n)
{	
	_putchar((n % 10) + '0'); 
	return (0);
}
