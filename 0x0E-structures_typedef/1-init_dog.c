#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - init_dog - Initializes a dog structure
 * @d: A dog structure
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != 0)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
