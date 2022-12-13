#include "main.h"

/**
 * _isalpha - checks if the passed arg is alphabetic
 * @c: argument passed from the main function
 * Return: 1 if alpha or 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
