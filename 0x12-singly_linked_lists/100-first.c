#include "lists.h"

void 100_first(void) __attribute__ ((constructor));

/**
 * 100_first - prints before the main() is executed
 *
 */
void 100_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
