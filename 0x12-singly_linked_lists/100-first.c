#include <stdio.h>
/**
 * beforemain -constructor function runs before main;
 *
 * Description: prints You're beat! and yet, you must allow,
 * I bore my house upon my back!\n
 *
 */
void __attribute__((constructor)) beforemain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
