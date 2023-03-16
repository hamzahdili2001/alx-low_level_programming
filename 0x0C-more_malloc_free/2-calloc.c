#include <stddef.h>
#include <stdlib.h>

/**
 * _memset - setting the memory of a pointer to a value
 * @ptr: pointer
 * @value: integer value
 * @num: n times
 *
 * Return: Pointer set to a value
*/

void *_memset(void *ptr, int value, size_t num)
{
	size_t i;
	unsigned char *p = (unsigned char *) ptr;

	for (i = 0; i < num; i++)
		*(p + i) = (unsigned char) value;

	return (ptr);
}

/**
 * _calloc - allocate memory using malloc
 * @nmemb: number of elements in an array
 * @size: bytes
 * Return: allocated memory set to 0
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);

	if (array == NULL)
		return (NULL);

	_memset(array, 0, nmemb * size);

	return (array);
}
