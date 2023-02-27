#include "main.h"

/**
 * swap_int - swaping two variables
 * @a: variable one
 * @b: variable two
 * Return:
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;
	*b = temp;
}

