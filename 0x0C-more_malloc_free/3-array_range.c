#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min range
 * @max: max range
 * Return: an Array of integers
*/

int *array_range(int min, int max)
{
	int *array, i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		array[i] = min + i;

	return (array);
}
