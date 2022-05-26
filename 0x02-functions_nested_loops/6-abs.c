#include "main.h"
/**
 * _abs - absolute value of integer
 * @c: value of int provided
 *
 * Return: absolute value of int provided
 */
int _abs(int c)
{
	if (c < 0)
		c *= -1;
	return (c);
}
