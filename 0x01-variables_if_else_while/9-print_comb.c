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

	for (i = 48; i < 57; i++)
	{
		putchar(i);
		putchar(44);
		putchar(32);
	}
	putchar(i);
	return (0);
}
