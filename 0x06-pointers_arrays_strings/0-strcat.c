#include "main.h"

/**
 * _strcat - concatenating two strings
 *
 * @dest: First string pointer
 * @src: Secong string pointer
 *
 * Return: Pointer to first string
 */

char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;
	int z = 0;

	while (x < 2)
	{
		if (*(dest + y) == '\0')
			x = 1;
		if (x == 1)
		{
			*(dest + y) = *(src + z);
			z++;
		}

		if  (*(src + z) == '\0')
			break;
		y++;
	}

	return (dest);
}
