#include "search_algos.h"

/**
* jump_search - function that searches for a
* value in a sorted array of integers using
* the Jump search algorithm.
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: first index where value is located
*/

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t i = 0;

	if (array == NULL)
		return (-1);
	while (i < size)
	{
		if (array[i] >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", prev, i);
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		prev = i;
		i += step;
	}
	if (i >= size)
		printf("Value found between indexes [%lu] and [%lu]\n", prev, i);
	i = (i < size) ? i : size - 1;
	while (prev <= i)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}
	return (-1);
}
