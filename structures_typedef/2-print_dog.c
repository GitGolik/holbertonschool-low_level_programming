#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the information of a dog
 * @d: pointer to the struct dog variable to print
 */
void print_dog(struct dog *d)
{
    if (d == NULL)
    return;

    printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
    printf("Age: %.6f\n", d->age);
    printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
}
