#include "main.h"

/**
 * _atoi - Converts strings to integers
 *
 * @s: String pointer
 * Return: Int
 */

int _atoi(char *s)
{
	int x = 0;
	int y = 0;
	int z = 0;
	int w = 0;
	int u = 0;
	int f = 0;

	while (s[z] != '\0')
		z++;

	while (x < z && f == 0)
	{
		if (s[x] == '-')
			++y;
		if (s[x] >= '0' && s[x] <= '9')
		{
			w = s[x] - '0';
			if (y % 2)
				w = -w;
			u = u * 10 + w;
			f = 1;

			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			f = 0;
		}
		x++;
	}
	if (f == 0)
		return (0);
	return (u);
}
