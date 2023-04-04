#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character in the string
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
