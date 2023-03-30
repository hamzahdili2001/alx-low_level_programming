#include <stdio.h>
#include <sys/cdefs.h>

void printStr(void) __attribute__((constructor));

/**
 * printStr - function that prints string before the main
 * it called a constructor
*/
void printStr(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}




