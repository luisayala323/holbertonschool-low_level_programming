#ifndef dog_h
#define dog_h

/**
 * struct dog - a dog
 * @name: variable
 * @age: variable
 * @owner: variable
 *
 * Description: new type with following element
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
