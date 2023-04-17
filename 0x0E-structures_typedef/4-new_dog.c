#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: the name of the new dog.
 * @age: it age.
 * @owner: it owners name.
 *
 * Return: the pointer to the new dog struct.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	dog_t *dog_one;

	dog_one = malloc(sizeof(dog_t));

	if (dog_one == NULL)
	{
		return (NULL);
	}
	dog_one->name = malloc(sizeof(name) + 1);
	if (dog_one->name == NULL)
	{
		free(dog_one);
		return (NULL);
	}
	dog_one->owner = malloc(sizeof(owner) + 1);
	if (dog_one->owner == NULL)
	{
		free(dog_one->name);
		free(dog_one);
		return (NULL);
	}
	for (i = 0; name[i] ; i++)
	{
		dog_one->name[i] = name[i];
	}
	dog_one->name[i] = '\0';
	dog_one->age = age;
	for (i = 0; owner[i] ; i++)
	{
		dog_one->owner[i] = owner[i];
	}
	dog_one->owner[i] = '\0';
	return (dog_one);
}
