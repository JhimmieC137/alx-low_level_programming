#include "main.h"

/**
 * _print_rev_recursion - prints recursively in reverse
 *
 * @s: string pointer
 *
 * Return: Void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
