#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: alphabet soup
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char alphabets[24] = "abcdfghijklmnoqrstuvwxyz";

	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(alphabets[i]);
	}
	putchar("\n");
	return (0);
}
