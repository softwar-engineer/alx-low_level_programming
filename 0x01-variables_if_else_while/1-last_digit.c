#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */
/**
 * main - entry point
 *
 * Return: 0 if successfully completed
 *
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit;

	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, last_digit);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0", n, 0);
	}

	else
	{
		printf("Last digit of %d is %d and less than 6 and not 0", n, last_digit);
	}
	return (0);
}