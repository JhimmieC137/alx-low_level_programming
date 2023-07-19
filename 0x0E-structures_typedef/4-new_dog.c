#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 *
 * @name: pointer to name string
 * @age: age of dog
 * @owner: pointer to onwer's name string
 *
 * Return: type dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;

		return (d);
	}

	else
		return (NULL);
}
