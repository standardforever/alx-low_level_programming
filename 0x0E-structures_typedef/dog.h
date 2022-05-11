#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Dog data.
 * @name: Name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: a structure with the name, age and owner of the dog.
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
void free_dog(dog_t *d);

#endif
