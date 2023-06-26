#include "main.h"

/**
 * swap_int - Swaps the values of
 * two variables without using the variable names
 *
 * @a: first variable
 * @b: second variable
 *
 */

void swap_int(int *a, int *b)
{
	int x = *a;

	int y = *b;

	*a = y;
	*b = x;
}
