#ifndef DOG_H
#define DOG_H
/**
 * struct dog - new type containing basic elements
 * @name: element 1
 * @age: element 2
 * @owner: element 3
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - used for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
