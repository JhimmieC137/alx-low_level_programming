#include "main.h"

/**
* leet - encode into 1337speak
* @n: input value
* Return: n value
*/

char *leet(char *n)

{

	int x, y;

	char x1[] = "aAeEoOtTlL";

	char x2[] = "4433007711";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (n[x] == x1[y])
			{
				n[x] = x2[y];
			}
		}
	}
	return (n);
}
