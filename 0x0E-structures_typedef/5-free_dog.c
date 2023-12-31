#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 *
 * @d: - pointer to dog struct
 *
 * Return: Void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d);
	}
}
