#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing combinations of numbers
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int i, x, y;

	for (i = 48; i <  58; i++ )
	{
		for (x = 49; x < 58; x++)
		{
			for (y = 50; y < 58; y++)
			{
				if (y > x && x > i)
				{
					putchar(i);
					putchar(x);
					putchar(y);

					if (i != 55 || x !=56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
