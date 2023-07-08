#include "main.h"
#include <stdio.h>
/**
 * main - prints name of function
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	argc++;
	return (0);
}
