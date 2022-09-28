#include "main.h"

/**
 * times_table: Write a function that prints
 * the 9 times table, starting with 0.
 * i, j, k of current results 0.
 * 
 */
void times_table(void)
{
	int i, j, p;
	int k = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 11; j++)
		{
			p = j * k;
			if (p >= 0 && p <= 9)
			{
				if (j == 0)
					_putchar(p + '0');
				else if (j == 10)
				{
					_putchar('\n');
					k++;
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(p + '0');
				}
			}
			else if (p >= 10)
			{
				if (j == 10)
				{
					_putchar('\n');
					k++;
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((p / 10) + '0');
					_putchar((p % 10) + '0');
				}
			}
		}
	}
}
