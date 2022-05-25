#include "main.h"
/**
 * print_sign - Prints sign of number
 * @n: number check
 *
 * Return: -1 if negative, 0 if 0, otherwise 1.
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('+');
	return (1);
}
