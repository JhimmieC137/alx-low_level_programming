#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <time.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: testing if else statements
 *
 * Return: Always 0 (Succsess)
 *
 */
/* betty style doc for function main goes there */
void positive_or_negative(int n)
{

	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive", n);
	} else if (n < 0)
	{
		printf("%d is negative", n);
	} else
	{
		printf("%d is zero", n);
	}
	printf("\n");
}
