#include "main.h"

/**
 * factorial - finds the factorial of a number
 *
 * @n: given number
 *
 * Return: factorial sum value
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
