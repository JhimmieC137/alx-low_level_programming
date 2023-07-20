#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Prints return statements of functions
 *
 * @array: array of values
 * @size: size of array
 * @cmp: pointer to function
 * Return: _1 on faliure, something else on success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL)
	{
		if (size > 0 && size)
		{
			int x;
			int value;

			for (x = 0; x < size; x++)
			{
				value = cmp(array[x]);
				if (value > 0)
					break;
			}
			return (x);
		}

		return (-1);
	}
	else
		return (-1);
}
