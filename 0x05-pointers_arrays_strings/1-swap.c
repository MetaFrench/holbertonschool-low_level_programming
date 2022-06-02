#include "main.h"
/**
 * swap_int - swaps the value of 2 integers
 * @a: first int
 * @b: second int
 *
 * Return: int swap
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
