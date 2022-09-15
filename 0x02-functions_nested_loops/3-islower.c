#include "main.h"

/** 
 * function that checks that checks for a lowercaes
 * character. Returns 1 if c is lowercase, returns 
 * 0 otherwise.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
