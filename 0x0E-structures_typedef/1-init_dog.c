#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes data for a struct dog variable
 *
 * @d: pointer to struct
 * @name: pointer to name string
 * @age: age of dog
 * @owner: pointer to string of owner name
 *
 * Return: Void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
