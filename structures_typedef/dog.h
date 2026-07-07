#ifndef DOG_H
#define DOG_H

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

#endif /* DOG_H */