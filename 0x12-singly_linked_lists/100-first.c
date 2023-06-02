#include <stdio.h>

/**
 * before - excuted before main
 * Return: nothing
 */

void before() __attribute__ ((constructor))
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
