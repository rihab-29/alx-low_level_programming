#include "lists.h"

void execut_first(void) __attribute__ ((constructor));

/**
 * execut_first - prints before the main() is executed
 *
 */
void execut_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
