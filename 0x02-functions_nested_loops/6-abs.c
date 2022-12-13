#include "main.h"
#include <stdio.h>
/**
 * _abs - computes the absolute value of an integer
 * @n: is the int to be operated upon
 *
 * Return: unsigned int value to the function called
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	{
		n *= -1;
		return (n);
	}
}
