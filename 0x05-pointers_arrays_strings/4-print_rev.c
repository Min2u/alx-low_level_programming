#include "main.h"

/**
 * print_rev - prints reversed string, followd by a new line
 * @s: pointer to the strting to print 
 * Retrun: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		putchar(s[i]);;
	}
	_putchar('\n');
}
