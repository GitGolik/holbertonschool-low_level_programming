#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner
 * Return: pointer to dog_t, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *d;
    unsigned int len_name; len_owner, i;

    d = malloc(sizeof(dog_t));
    if (d == NULL)
    return (NULL)
    len_name = 0;
    while (name != NULL && name[len_name] != '\0')
    len_name++;
    len_owner = 0;
    while (owner != NULL && owner[len_owner] != '\0')
    len_owner++;
    d->name = malloc(sizeof(char) * (len_name + 1));
    if (d_>name == NULL)
    {
        free(d);
        return (NULL);
    }
    for (i = 0; i < len_name; i++)
    d->name[i] = name[i];
    d->name[len_name] = '\0';
    d->owner = malloc(sizeof(char) * (len_owner + 1));
    if (d->owner == NULL)
    {
        free(d->name);
        free(d);
        return (NULL);
    }
    for (i = 0; i < len_owner; i++)
    d->owner[i] = owner[i];
    d->owner[len_owner] = '\0';
    d->age = age;
    return (d);
}