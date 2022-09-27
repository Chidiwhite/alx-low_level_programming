#include "main.h"

/**
 * times_table: Write a function that prints 
 * the 9 times table, starting with 0.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i, j;
		    
	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
		{
			_putchar((i * j) + 0);
			_putchar(',');
		}
		_putchar('\n');
	}
}
