#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure definition of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: Define a new type struct
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);


#endif
