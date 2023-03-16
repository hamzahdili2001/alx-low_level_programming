#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: amount of memory
 * Return: pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	size_t *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
