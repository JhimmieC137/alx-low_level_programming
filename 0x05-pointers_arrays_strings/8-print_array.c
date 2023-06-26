#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements in an array
 *
 * @a: array variable name
 * @n: array length
 * Return: void
 */

void print_array(int *a, int n)
{
	int x;

	for  (x = 0; x < n; x++)
	{
		printf("%d", *(a + x));
		if (x + 1 != n)
			printf(", ");
	}
	printf("\n");
}
