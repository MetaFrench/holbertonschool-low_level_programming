#include "main.h"
/**
 *times_table - Task 9
 *
 *
 */
void times_table(void)
{
	int num;
	int mult;
	int prod;
		for (num = 0; num <= 9; num++)
		{
			_putchar('0');
			for (mult = 1; mult <= 9; mult++)
			{
				_putchar(',');
				_putchar(' ');
				prod = num * mult;
				if (prod <= 9)
				{
					_putchar(' ');
				}
				else
				{
				_putchar ('0' + (prod / 10));
				}
			_putchar('0' + (prod % 10));
			}
			_putchar('\n');
		}
}
