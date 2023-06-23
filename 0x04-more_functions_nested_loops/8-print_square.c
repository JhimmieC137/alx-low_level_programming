#include "main.h"

/**
 * print_square - entry point
 *
 * @size: parameter
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int w, k;

		for (w = 0; w < size; w++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
