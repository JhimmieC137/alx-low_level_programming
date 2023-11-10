#include "main.h"

/**
 * print_sign - prints sign
 *
 * @n: number
 *
 * Return: 1 for postive, 0 for Zero, -1 for negative
 *
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
