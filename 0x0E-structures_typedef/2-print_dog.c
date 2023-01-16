#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - prints a struct dog
 * @d: Pointer to struct
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
if (d != 0)
{
if ((*d).name != 0)
	printf("Name: %s\n", (*d).name);
else
	printf("Name: (nil)\n");
printf("Age: %f\n", (*d).age);
if ((*d).owner != 0)
	printf("Owner: %s\n", (*d).owner);
else
	printf("Owner: (nil)\n");
}
}
