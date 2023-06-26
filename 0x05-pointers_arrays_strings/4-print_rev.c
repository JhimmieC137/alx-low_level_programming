#include "main.h"
#include <stdio.h>

/**
 * print_rev -  Prints srings in reverse
 *
 * @s: String argument
 * Return: void
 *
 */

void print_rev(char *s)
{
	int d = 0;

	while (*(s + d) != '\0')
	{
		d++;
	}

	while (d >= 0)
	{
		_putchar(*(s + d));
		d--;
	}
	_putchar('\n');
}
