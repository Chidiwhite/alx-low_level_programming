#include "main.h"
#include <stdio.h>
/**
 * _abs - a function that computes the absolute value of an integer
 * @ab: integer input
 *
 * Return: absolute value of ab
 */
int _abs(int n)
{
	n = _abs(-1);
	printf("%d\n", n);

	n = _abs(0);
	printf("%d\n", n);

	n = _abs(1);
	printf("%d\n", n);

	n = _abs(-98);
	printf("%d\n", n);

	return (0);
}
