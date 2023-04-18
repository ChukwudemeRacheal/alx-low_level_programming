#include <stdlib.h>
	#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dogto initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	d->name = name;
	d->age = age;
	d->owner = owner;
}
