#include <stdio.h>

/**
 * main - Entry Level
 *
 * Description: Hexadecimals
 *
 * Returd: Always 0 (Sussess)
 *
 */

int main(void)
{
	char hexa[17] = "0123456789abcdefg";
	
	int i;

	for (i = 0; i < 15; i++)
	{
		putchar(hexa[i]);
	}
	putchar('\n');

	return (0);
}
