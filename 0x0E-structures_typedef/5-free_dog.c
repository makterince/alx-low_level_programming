#include "dog.h"
#include <stdlib.h>
/**
 *free_dog - frees dog_t
 *@d: pointer to dog
 *Return: giueshguh
 *
 *
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
	else
		return;
}
