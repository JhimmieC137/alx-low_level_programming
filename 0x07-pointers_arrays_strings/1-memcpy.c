#include "main.h"

/**
 * _memcpy - Copies bytes from memory area to memory area
 *
 * @dest: memory area 1
 * @src: memory area 2
 * @n: number of elements or bytes
 * Return: Pointer to memory area 1
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*(dest + x) = *(src + x);
	}
	return (dest);
}
