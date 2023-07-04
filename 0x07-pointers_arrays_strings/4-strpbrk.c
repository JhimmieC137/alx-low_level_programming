#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - locatting the first occurance of a byte
 *
 * @s: string pointer
 * @accept: string of bytes
 *
 * Return: pointer or null
 */

char *_strpbrk(char *s, char *accept)
{
	int x = 0;
	int y = 0;
	int z;

	while (accept[x] != '\0')
		x++;

	while (s[y] != '\0')
	{
		for (z = 0; z < x; z++)
		{
			if (accept[z] == s[y])
				return (&s[y]);
		}
		y++;
	}
	return (NULL);
}
