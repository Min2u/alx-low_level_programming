#include "main.h"

/**
 * _Pow_recursion - search a string for any of a set of bytes
 * @x: base
 * @y: exposant
 * Return: pointer to the byte in 's' that matchas one of the bytes in 'accept'
 * or NULL if no such byte is found.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (x == 1)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
