#include "main.h"

/**
 * print_line - prints the numbers 0 through 9, followed by a new line
 * @i: int
 * Return: Always 0
 */
void print_line(int i)
{
	int n;

	for (n = 0; n < i; n++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
