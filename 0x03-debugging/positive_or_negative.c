#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/* more headers goes there */
/**
 * positive_or_negative - entry point
 * @n: arg from main function
 * Return: 0 if completed successfully
 *
 */
/* betty style doc for function main goes there */
void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", 0);
	}
}
