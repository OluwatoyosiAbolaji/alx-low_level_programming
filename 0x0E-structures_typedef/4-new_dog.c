#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/* declare variables */
	unsigned int nl, ol, i;
	dog_t *dog;

	/* if name of dog or name of owner is null */
	if (name == NULL || owner == NULL)
		return (NULL);
	/* allocate space for dog */
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	/* get length of name and add null byte */
	for (nl = 0; name[nl]; nl++)
		;
	nl++;
	/* allocate space for dog name */
	dog->name = malloc(nl * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < nl; i++)
		dog->name[i] = name[i];
	dog->age = age;
	/* get length of owner and add null byte */
	for (ol = 0; owner[ol]; ol++)
		;
	ol++;
	/* allocate space for owner name */
	dog->owner = malloc(ol * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ol; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
