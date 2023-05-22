#ifndef DOG_H
#define DOG_H

/**
 *struct dog - a dog's basic info
 *@name: name to initialize
 *@age: age to initialize
 *@owner: owner to initialize
 *
 * Description: Longer description
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 *dog_ t - typedef for struct dog
 *
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcopy(char *dest, char *src);
int _strlen(char *s);

#endif
