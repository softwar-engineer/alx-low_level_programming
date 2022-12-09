#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/** 
 * main - entry point
 *
 * Return: 0 if completed successfully
 *
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ( n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if ( n < 0)
	{
		printf("%d is negative\n", n);
	}
	else 
	{
		printf("%d is zero\n", 0);
	return (0);
}
