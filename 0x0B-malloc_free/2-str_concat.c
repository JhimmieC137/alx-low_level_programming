#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 *
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 *
 * Return: pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int x = 0;
	int y = 0;
	int z;
	int f;
	int e;
	
	if (s1 != NULL )
	{
		while (s1[x] != '\0')
			x++;
	}
	if (s2 != NULL )
	{
		while (s2[y] != '\0')
			y++;
	}

	f = x + y;

	p = (char *) malloc(f * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (z = 0; z <= x; z++)
	{
		if (z == x && s2 != NULL)
		{
			for (e = 0; e < y; e++)
			{
				*(p + (z + e)) = *(s2 + e);
			}
		}
		else if (s1 != NULL)
		{
			*(p + z) = *(s1 + z);
		}
	}
	return (p);
}
