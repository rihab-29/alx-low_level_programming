#include "main.h"

/**
 * string_len - returns the length of string
 * @s: string
 * Return: the length
 */
int string_len(char *s)
{
	if (*s != '\0')
		return (1 + string_len(s + 1));
	else
		return (0);
}

/**
 * char_checker - compares characters of string
 * @s: string
 * @a: iterator
 * @b: iterator
 * Return: nothing
 */
int char_checker(char *s, int a, int b)
{
	if (*(s + a) == *(s + b))
	{
		if (a == b || a == b + 1)
			return (1);
		return (0 + char_checker(s, a + 1, b - 1));
	}
	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: if string is palindrome - 1
 * if not - 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (char_checker(s, 0, string_len(s) - 1));
}
