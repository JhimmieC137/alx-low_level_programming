#include "main.h"

/**
 * puts2 - prints every other number
 * starting with the first
 *
 * @str: pointer argument
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if ((i + 1) %  2 == 0)
			_putchar(*(str + (i - 1)));
		i++;
	}
	_putchar('\n');
}
