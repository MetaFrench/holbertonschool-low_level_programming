#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: string to be referenced for output
 *
 * Return: void (Success)
 */

void puts2(char *str)
{
	int v = 0;

	while
(str[v] != '\0')
	{
		_putchar(str[v]);
		v += 2;
	}
	_putchar('\n');
}
