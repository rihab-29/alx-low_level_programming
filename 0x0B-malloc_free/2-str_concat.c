#include "main.h"

/**
 * _strlen - finds the length of a string
 * @str: string
 * Return: the size of the string
 */
int _strlen(char *str)
{
	int size;

	size = 0;
	for (; str[size] != '\0'; size++)
	;
	return (size);
}

/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *m;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = _strlen(S1);
	size2 = _strlen(s2);
	m = malloc((size1 + size2) * sizeof(char) + 1);
	if (m == 0)
	{
		return (0);
	}
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			m[i] = s1[i];
		else
			m[i] = s2[i - size1];
	}
	m[i] = '\0';
	return (m);
}
