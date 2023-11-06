#include <stdio.h>

/**
 * _islower - Checks if alphabet is in lower case
 *
 * @p: String letter
 * Return: 0 or 1 if successful
 */

int _islower(char p)
{
	int a;
	char b;

	for (a = 97; a <= 123; a++)
	{
		b = a;
		if (b == p)
			return (1);
	}
	return (0);
}
