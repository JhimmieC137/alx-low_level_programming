#include <stdio.h>
#include <stdlib.h>
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
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive", n);
	} else
	{
		printf("%d is negative", n);
	}
	printf("\n");
	return (0);
}
