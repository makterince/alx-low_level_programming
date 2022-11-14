#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *init_dog - new dog
 *@name: dog name
 *@age: age
 *@owner: owner
 *@d: pointer to new dog
 *Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
