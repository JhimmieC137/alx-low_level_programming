#include "main.h"

/**
 * puts_half - prints half of the string
 *
 * @str: pointer argument
 * Return: void
 */

void puts_half(char *str)
{
	int x = 0;
	int y;
	int z;
	
	while (*(str + x) != '\0')
		x++;

	if (x % 2 == 0)
	{
		for (y = (x / 2); y < x; y++)
			_putchar(*(str + y));
		_putchar('\n');
	}
	else
	{
		for (z = ((x + 1) / 2); z < x; z++)
			_putchar(*(str + z));
		_putchar('\n');
	}

}
