#include <stdio.h>

/**
* main - Prints number of aguments
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 on Success
*/

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
