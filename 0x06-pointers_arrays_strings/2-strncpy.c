#include "main.h"

/**
 * *_strncpy - copying one string to another
 *
 * @dest: First string pointer
 * @src: Second string pointer
 * @n: number of characters to copy
 *
 * Return: First string pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;
	int y;
	n--;

	for (x = 0; x <= n; x++)
	{
		*(dest + x) = *(src + x);
		if (*(src + x) == '\0')
			y = 1;
		if (y == 1)
			*(dest + x) = '\0';
	}

	return (dest);
}
