#include "main.h"

/**
 * main - Entry point
 *
 * Description: Printing _putchar
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char text[8] = "_putchar";
	
	for (int i = 0; i <= 8; i++)
	{
		_putchar(text[i]);
	}
	return (0);
}
