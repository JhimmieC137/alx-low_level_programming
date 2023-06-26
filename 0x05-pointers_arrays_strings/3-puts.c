#include "main.h"

/**
 * _puts - Prints string
 *
 * @str: pointer to string
 * Return: void
 */

void _puts(char *str)
{
	char x;

	int y = 0;

	while (*(str + y) != '\0')
	{
		x = *(str + y);
		_putchar(x);
		y++;
	}
	_putchar('\n');
}
