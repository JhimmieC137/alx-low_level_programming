#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Printing different sizes of data types in C'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: " sizeof(char)"\n");
	printf("Size of an int: " sizeof(int)"\n");
	printf("Size of a long int: " sizeof(long int)"\n");
	printf("Size of a long long int: " sizeof(long int *)"\n");
	printf("Size of a float: " sizeof(float)"\n");
	return (0);
}
