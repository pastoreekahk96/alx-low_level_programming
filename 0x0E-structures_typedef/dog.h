#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog structure
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
