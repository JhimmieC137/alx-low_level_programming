#include "main.h"

/**
 * _strncat - Concatenating two strings
 * by a specified amout of characters
 *
 * @dest: Fiest string pointer
 * @src: Second string pointer
 * @n: specified nuber of string elements
 *
 * Return: Fisrt string pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;
	int z = 0;

	while (x < 10)
	{
		if (*(dest + y) == '\0')
		{
			x = 1;
			break;
		}
		y++;
	}
	n--;

	for (z = 0; z <= n; z++)
	{
		*(dest + y) = *(src + z);
		y++;

		if (*(src + (z + 1)) == '\0')
			break;
	}


	return (dest);
}
