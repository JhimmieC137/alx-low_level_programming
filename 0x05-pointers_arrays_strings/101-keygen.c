#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Grenerates random valid passwords
 *
 * Return: 0 on Success
 */

int main(void)
{
	int tries[100];

	int x;
	int y = 0;
	int z;
	
	srand(time(NULL));
	for (x = 0; x < 100; x++)
	{
		tries[x] = rand() % 78;
		y += (tries[x] + '0');
		putchar(tries[x] + '0');

		if ((2772 - y) - '0' < 78)
		{
			z = 2772 - y - '0';
			y += z;
			putchar(z + '0');
			break;
		}
	}
	return (0);
}
