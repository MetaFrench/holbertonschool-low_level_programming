#include <stdio.h>
#include "main.h"

/**
 * largest_number - returns largest number
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else if (c > a && c > b)
	{
		largest = c;
	}
	else if (a == b || b == c)
	{
		largest = b;
	}
	else if (a == c)
	{
		largest = a;
	}
	return (largest);
}
