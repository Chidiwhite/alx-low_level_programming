#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 * _putchar only 3 times
 *
 * Return: 0-14 x10 followed by new line
 */
void more_numbers(void)
{
	int num, count;

	for (count = 0; count <= 10; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
				_putchar((num / 10) + '0');

			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
