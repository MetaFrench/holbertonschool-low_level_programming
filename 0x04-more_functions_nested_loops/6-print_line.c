#include "main.h"

/**
 * print_line - prints the numbers 0 through 9, followed by a new line
 * @n: int 
 * Return: Always 0
 */
void print_line(int i)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		_putchar(i);
	}
	_putchar(10);
}
