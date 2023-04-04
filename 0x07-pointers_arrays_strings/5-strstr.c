#include "main.h"

/**
 * _strstr - that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: a pointer or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needlr[i]);
		}
		haystack++;
	}
	return ('\0');
}
