#include "main.h"
#include <stdio.h>
/**
 * _strlen - Counting elements in a string
 *
 * @s: pointer to string
 * Return: 16 (success)
 */

int _strlen(char *s)
{
	int i = 0;

	char x;

	while (x != '\0')
	{
		x = *(s + i);
		++i;
	}
	return (i-1);
}
