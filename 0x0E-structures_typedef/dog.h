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
typedef struct dog dog_type;

void init_dog(struct dog *strdog, char *name, float age, char *owner);
void print_dog(struct dog *strdog);
dog_type *diff_dog(char *name, float age, char *owner);
void free_dog(dog_type *strdog);
char *_strcpy(char *dest, char *src);
int _strlen(char *str);

#endif
