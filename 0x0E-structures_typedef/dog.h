#ifndef DOG_H
#define DOG_H

/**
 * struct dog - for dog
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - new
 */
typedef dog dog_t;
#endif
