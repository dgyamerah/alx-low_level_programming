#include "main.h"
/**
 * _islower - checks if a character is lowercase and returns 1
 * @c: the int value is compared with the ASCII value
 *
 * Return: 0 (success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
