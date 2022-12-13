#include "main.h"
/**
 * print_last_digit - prints the last digits of any number
 * @a: the int value
 *
 * Return: the last last digit to the function called
 */

int print_last_digit(int a)
{
	if (a >= 0 && a <= 9)
		return (a);
	{
		a = abs(a % 10);
		return (a);
	}
}
