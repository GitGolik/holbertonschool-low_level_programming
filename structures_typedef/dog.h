#ifndef DOG_H
#define DOG_H

typedef struct dog dog_t;

/**
 * struct dog - a structure that defines a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: This structure represents a dog with its name, age, and owner.
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - typedef of struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
