#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */
/**
 * main - entry point
 *
 * Return: 0 if completed successfully
 *
 */
/* betty style doc for function main goes there */

void positive_or_negative(int n)
{
	int n;
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
	return (0);
}
