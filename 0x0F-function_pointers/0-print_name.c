#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints name through other functions
 *
 * @name: name string
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name)
		f(name);
}
