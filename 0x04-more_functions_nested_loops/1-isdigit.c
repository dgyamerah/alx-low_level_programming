#include "main.h"

/**
 * _isdigit - check if a character is a digit
 * @y: the number to be checked
 * Return: 1 if character is a digit and 0 if otherwise
 */

int _isdigit(int y)
{
	if (y >= 48 && y <= 57)
	{
	return (1);
	}
	return (0);
}
