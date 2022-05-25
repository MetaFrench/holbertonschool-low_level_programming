#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - Prints natural numbers and puts 98 on new line
 *@n: Program look at the integer
 *Return: Void (Success)
 */

void print_to_98(int n )
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf(%d, ", n)
			n++;
		}
		printf("98\n");
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ");
			n--;
		}
		printf("98\n";
	}
	else
	{
		printf(98\n");
	}
}

