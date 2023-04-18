#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - string length
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
/**
 * _strcpy - string copy
 * @dest: parameter
 * @src: parameter to be copied
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int b;
	int a;

	b = 0;

	while (src[b] != '\0')
	{
		b++;
	}
	for (a = 0; a < b; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
/**
 * new_dog -  function that creates a new dog
 * @name: element
 * @age: element
 * @owner: element
 * Return: NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int n;
	int m;

	n = _strlen(name);
	m = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (n + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (m + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
