#include "main.h"
/**
 * print_sign - return 0 if letter is not lowercae, 1 if letter is lowercase
 * @n: number to check
 *
 * Return: 0 or 1 (success)
 */
int print_sign(int n)
{
	int test;

	if (n > 0)
	{
		test = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		test = 0;
		_putchar('0');
	}
	else
	{
		test = -1;
		_putchar('-');
	}
	return (test);
}
