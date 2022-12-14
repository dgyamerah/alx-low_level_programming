#include "main.h"
/**
 * print_last_digit - prints the last digits of any number
 * @n: the int value
 *
 * Return: the last last digit to the function called
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
