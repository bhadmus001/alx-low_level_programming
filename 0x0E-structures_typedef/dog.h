#ifndef DOG_H
#define DOG_H
/**
 * struct dog - stores the information of a dog
 * @name:dog name
 * @age: dog age
 * @owner: name of the owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
