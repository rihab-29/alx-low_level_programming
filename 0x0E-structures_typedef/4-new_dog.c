#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: lentgh
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
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

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a++] = '\0';
	return (dest);
}

/**
 * *new_dog - creates a new dog
 * @name: new dog's name
 * @age: new dog's age
 * @owner: name of new dog's owner
 * Return: truct pointer dog
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
}
