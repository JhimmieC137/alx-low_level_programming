#include "main.h"

/**
 * _strcpy - Copying a string from one pointer
 * to another
 *
 * @dest: Destination pointer
 * @src: Src string pointer
 * Return: pointer
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (x < 1)
	{
		*(dest + y) = *(src + y);
		if (*(src + y) == '\0')
			break;
		y++;
	}

	return (dest);
}
