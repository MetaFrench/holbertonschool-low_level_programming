#include<stdio.h>
/**
 * main - Entry point
*
 * Return: Always 0 (Success)
 */

int man(void)
{
	int x = '0';

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
		if (x != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}	
