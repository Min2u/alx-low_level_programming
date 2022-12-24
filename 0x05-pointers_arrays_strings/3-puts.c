#include "main.h"

/**
 * _puts - prints a string, followed by a new line,
 * @str: string to printed
 * Return: void
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
		_puts(*str++);
	}
		_putchar('\n');
}

