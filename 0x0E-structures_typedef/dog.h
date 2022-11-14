#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
 * struct dog - for dog
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
};
dog dog_t;
#endif
