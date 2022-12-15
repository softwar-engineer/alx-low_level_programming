#include "main.h"
/**
 * _isupper - checks if c us uppercase
 * @c: arg from main function
 * Return: 0 if succesfully completed
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
