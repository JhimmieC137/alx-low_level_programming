#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of specified size
 * and initializes it with a specified character
 *
 * @size: Size of array
 * @c: Character for initialization
 *
 * Return: Pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *A;
	unsigned int x;

	if (size == 0)
		return (NULL);

	A = malloc(size * sizeof(char));

	if (A == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		A[x] = c;

	return (A);
}
