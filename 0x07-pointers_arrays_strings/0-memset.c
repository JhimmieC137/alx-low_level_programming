#include "main.h"

/**
 * _memset - fills elments in variable location with
 * constant bytes
 *
 * @s: variable pointer
 * @b: consatnt byte
 * @n: number of elements to be filled
 * Return: Pointer to variable
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*(s + x) = b;
	}
	return (s);
}
