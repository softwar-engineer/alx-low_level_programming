#include "main.h"

/**
 * _isdigit - checks if it a digit
 * @c: arg from main function
 * Return: 0 if succesful
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
