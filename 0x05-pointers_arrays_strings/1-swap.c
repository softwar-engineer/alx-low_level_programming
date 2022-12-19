#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: arg1 from test function
 * @b: arg2 from test function
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *b;
	*b = *a;
	*a = p;
}
