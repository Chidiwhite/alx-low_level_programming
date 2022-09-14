#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the 
 * 			alphabet, in lowercase.
 *
 * Reurn: Always 0.
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		for (c = 'a'; c < 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');
		i++;
	}
}
