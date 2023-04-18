#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: lentgh
 */
int _strlen(const char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}

/**
 * _strcpy - copies the string pointed to by src
 * the buffer pointed to by dest
 * @dest: destination value
 * @src: source value
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a]; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}

/**
 * *new_dog - creates a new dog
 * @name: new dog's name
 * @age: new dog's age
 * @owner: name of new dog's owner
 * Return: struct pointer dog
 * NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
	{
		return (NULL);
	}
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(name) + 1));
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}
