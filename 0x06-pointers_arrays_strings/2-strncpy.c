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

	for (x = 0; x < n; x++)
	{
		if (*(src + x) != '\0')
			*(dest + x) = *(src + x);
		else
			*(dest + x) = '\0';
	}

	return (dest);
}
