#include <stdlib.h>
/**
 * create_array - create an array of chars
 * @size: the size of the array
 * @c: chars
 * Return: NULL if zize is 0 or pointer to the array is 0
 * else returns pointer to the first element in the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(c));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}

