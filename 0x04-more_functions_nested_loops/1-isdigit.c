#include "main.h"

/**
 * _isdigit - Entry point
 *
 * Description: CHekkng for digits
 *
 * @c: argument
 * Return: 1 op 0 for success
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
