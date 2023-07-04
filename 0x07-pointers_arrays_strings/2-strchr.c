#include "main.h"
#include <stddef.h>
/**
 * _strchr - finds the first occurrance of a
 * character in a string
 *
 * @s: String pointer
 * @c: character to be found
 * Return: Pointer or NULL
 */

char *_strchr(char *s, char c)
{
	int x = 0;

	while (*(s + x) != '\0')
	{
		if (*(s + x) == c)
		{
			return (s[x]);
		}
		x++;
	}
	return (NULL);
}
