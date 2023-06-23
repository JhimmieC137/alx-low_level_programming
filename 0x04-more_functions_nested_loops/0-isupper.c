#include <stdio.h>
#include "main.h"

/**
 * _isupper - Entry point
 * Description: Detecting uppercase letters
 *
 * @c:  letter argument
 * Return: 1 or 0 for success
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);

}
