#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array
 * @a: arg1 from main
 * @n: arg2 from main
 */

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
			{
				printf("%d\n", a[i]);
			}
			else
			{
				printf("%d, ", a[i]);
			}
		}
	}
}
