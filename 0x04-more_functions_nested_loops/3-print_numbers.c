#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Description: Printing numbers
 *
 * Return: Void
 */

void print_numbers(void)
{
	int z;

	for (z = 0; z <= 9; z++)
	{
		_putchar(z + '0');
	}
	_putchar('\n');
}
