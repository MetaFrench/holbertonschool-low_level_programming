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
		putchar(g);
	for (g = 65; g <= 90; g++)
		putchar(g);
	putchar(10);
	return (0);
}
