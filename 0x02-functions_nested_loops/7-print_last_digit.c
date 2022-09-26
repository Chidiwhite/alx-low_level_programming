#include "main.h"

/**
 * print_last_digit - a function that prints the
 * last digit of a number.
 *
 * Return: value of the last digit.
 */

int print_last_digit(int n)
{     
	int lastn = n % 10;
	if (lastn < 0)
		lastn = lastn * -1;
	_putchar('0' + lastn);
	return (lastn);
}
