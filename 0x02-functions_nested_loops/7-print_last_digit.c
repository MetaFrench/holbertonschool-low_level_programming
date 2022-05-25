#include "main.h"

/**
 * print_last_digit - Task 7
 *
 * @c: Given from input
 *
 * Return: Always C
 */
int print_last_digit(int c)
{
	c = (c % 10);
		if (c < 0)
		{
			c = -c;
		}
	_putchar(c + 48);
	return (c);
}
