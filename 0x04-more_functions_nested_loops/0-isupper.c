#include <ctype.h>
#include <stdio.h>
#include "main.h"
/**
 *
 * Description: Detecting uppercase letters
 *
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
