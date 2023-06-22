#include "main.h"

/**
 * main - Entry point
 *
 * Description: Printing _putchar
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char word[8] = "_putchar";

	int x;

	for (x = 0; x < 8; x++)
	{
		_putchar(word[x]);
	}

	_putchar('\n');

	return (0);
}
