#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the digit we need to find the last number of
 *
 * Return: value of the last digit.
 */

int print_last_digit(int n)
{
	int lastn = n % 10;

	if (lastn < 0)
	{
		lastn = lastn * -1;
	}
	_putchar('0' + lastn);
	return (lastn);
}
