#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - copies string
 * @s1: first string
 * @s2: second string
 * @n: number of characters
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int a = 0;
	unsigned int b = 0;
	char *p;
	int x;
	unsigned int y;

	if (s1 != NULL)
	{
		while (s1[a] != '\0')
			a++;
	}
	if (s2 != NULL)
	{
		while (s2[b] != '\0')
			b++;
	}
	p = (char *) malloc(sizeof(char) * (b + a));
	if (p == NULL)
		return (NULL);
	for (x = 0; x < a; x++)
	{
		*(p + x) = *(s1 + x);
	}
	if (n >= b)
	{
		for (y = 0; y < b; y++)
		{
			*(p + (x + y)) = *(s2 + y);
		}
	}
	else
	{
		for (y = 0; y <= n; y++)
		{
			*(p + (x + y)) = *(s2 + y);
		}
	}
	return (p);
}
