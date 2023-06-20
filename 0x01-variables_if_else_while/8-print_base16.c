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
	int i;
	
	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
