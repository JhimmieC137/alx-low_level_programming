#include "main.h"

/**
 * _isalpha - Checks for alphabets
 *
 * @c: alphabet argument
 *
 * Return: 1 on success and 0 for failure
 *
 */

int _isalpha(int c)
{

	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
