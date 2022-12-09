#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 if successfully completed
 *
 */

int main(void)
{
	int first_digit, second_digit;

	for (first_digit = 0; first_digit < 9; first_digit++)
	{
		for (second_digit = first_digit + 1; second_digit < 10; second_digit++)
		{
			putchar(first_digit + '0');
			putchar(second_digit + '0');
			if (first_digit == 8 && second_digit == 9)
			{
				continue;
			}
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
