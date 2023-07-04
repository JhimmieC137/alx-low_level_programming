#include "main.h"

/**
 * print_chessboard - prints a chessboard
 *
 * @a: pointer
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{

		for (j = 0; j <= 8; j++)
		{
			if (j == 8)
				_putchar('\n');
			_putchar(a[i][j]);
		}
	}
}
