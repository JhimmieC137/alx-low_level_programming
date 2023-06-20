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
	char hexa[6] = "abcdef";
	int i;
	
	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 0; i < 6; i++)
	{
		putchar(hexa[i]);
	}
	putchar('\n');

	return (0);
}
