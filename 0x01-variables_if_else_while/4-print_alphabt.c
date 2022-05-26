#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
	{
	int g;

	for (g = 97; g <= 122; g++)
		if ((g != 101) && (g != 113))
			putchar(g);
	putchar(10);
	return (0);
}
