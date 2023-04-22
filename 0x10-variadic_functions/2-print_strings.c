#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: the string to be printed between the strings
 * @n: the number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *s;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%s%S", (s = va_arg(ap, char *)) ? s : "(nil)", i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
