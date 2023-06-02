#include <stdio.h>

/**
 * before - excuted before main
 * Return: nothing
 */

void __attribute__ ((constructor)) before(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
