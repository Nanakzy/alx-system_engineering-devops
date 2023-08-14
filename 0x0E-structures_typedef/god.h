#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dogs details
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog owner
 *
 * Description: longer description
 */
strucy dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t- typedef for struct dog
 */
typerdef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
