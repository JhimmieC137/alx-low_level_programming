#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - runs functions by elemnts in an array
 *
 * @array: An array of values
 * @size: Size of array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array && size && action)
	{
		for (x = 0; x < size; x++)
			action(array[x]);
	}
}
