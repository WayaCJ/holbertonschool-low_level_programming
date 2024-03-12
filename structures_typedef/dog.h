#ifndef _HEADER_
#define _HEADER_

/**
 *struct dog- Dog
 *@name: dog's name
 *@age: age
 *@owner: owner
 *Description: D
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 *dog_t- stru
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
