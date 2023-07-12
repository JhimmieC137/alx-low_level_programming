#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Copies string to different variable
 *
 * @str: String pointer
 *
 * Return: pointer to new string
 */

char *_strdup(char *str)
{
	char *b;
	int x = 0;
	int y;

	if (str == NULL)
		return (NULL);

	while (str[x] != '\0')
		x++;
	x++;

	b = (char *) malloc(x * sizeof(char));

	if (b == NULL)
		return (NULL);

	for (y = 0; y < x; y++)
		b[y] = str[y];

	return (b);

}
