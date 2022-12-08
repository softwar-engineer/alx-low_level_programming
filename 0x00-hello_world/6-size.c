#include<stdio.h>
#include<stdlib.h>

/**
 * main - entry point
 *
 * Return: terminates after code completion
 *
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of an int: %d byte(s)\n", sizeof(float));
	return (0);
}
