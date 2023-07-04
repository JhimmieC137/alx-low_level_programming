#include "main.h"

/**
 * _strspn - checking for appearance of different
 * characters
 *
 * @s: string pointer
 * @accept: pointer to specific string characters
 *
 * Return: An unsigned integer
 */

unsigned int _strspn(char *s, char *accept)
{
	int x = 0;
	int y = 0;
	int z;
	int w = 0;

	while (accept[w] != '\0')
		w++;

	while (*(s + x) != 32)
	{
		for (z = 0; z < w; z++)
		{
			if (accept[z] == s[x])
				y++;
		}
		x++;
	}
	return (y);
}
