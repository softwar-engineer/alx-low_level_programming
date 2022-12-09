#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 if succesfully completed
 *
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i == 57)
		{
			continue;
		}
		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
