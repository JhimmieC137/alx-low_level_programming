#include "main.h"
#include <stddef.h>

/**
 * _strstr - Searches for substrings within strings
 *
 * @haystack: Main string
 * @needle: Substring
 *
 * Return: pointer to string location in main string
 */

char *_strstr(char *haystack, char *needle)
{
	int x = 0;
	int y = 0;
	int s;

	while (needle[x] != '\0')
		x++;

	while (haystack[y] != '\0')
	{
		for (s = 0; s < x + 1; s++)
		{
			if (haystack[(y + s)] == needle[s])
			{
				if (s == x)
					return (&haystack[y]);
			}
			else
				break;
		}
		y++;
	}
	return (NULL);
}
