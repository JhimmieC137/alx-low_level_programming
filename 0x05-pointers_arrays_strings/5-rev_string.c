#include "main.h"
#include <stdio.h>
/**
 * rev_string - Prints a string in reverse
 *
 * @s: String argument
 * Return: void
 */

void rev_string(char *s)
{
	char r = s[0];

	int x = 0;

	int i;

	while (s[x] != '\0')
	{
		x++;
	}

	for  (i = 0; i < x; i++)
	{
		x--;
		r = s[i];
		s[i] = s[x];
		s[x] = r;
	}
}
