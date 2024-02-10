#include "search_algos.h"

/**
 * print_array_util - print array elements
 * @array: pointer to the first element of the array to search in
 * @start: starting point in @array
 * @end: ending point in @array
 */
void print_array_util(int *array, int start, int end)
{
	int i;
	int flag = 0;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		if (flag)
			printf(", ");
		printf("%d", array[i]);
		flag = 1;
	}

	printf("\n");
}

/**
 * binary_s - searches for a value in an array of integers
 * using Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @low: starting point in @array
 * @high: ending point in @array
 * @value: value to search for
 *
 * Return:
 * If array is NULL, your function must return -1
 * otherwise the index of the @value in the @array
 */
int binary_s(int *array, size_t low, size_t high, int value)
{
		int center;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		center = low + (high - low) / 2;
		print_array_util(array, low, high);
		if (array[center] < value)
			low = center + 1;
		else if (array[center] > value)
			high = center - 1;
		else
			return (center);
	}

	return (-1);
}

/**
* exponential_search - searches for a value in a sorted array of integers
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: first index where value is located
*/

int exponential_search(int *array, size_t size, int value)
{
	size_t bound;

	if (array == NULL || size == 0)
		return (-1);

	bound = 1;
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		   bound / 2, bound < size - 1 ? bound : size - 1);

	if (bound < size)
		return (binary_s(array, bound / 2, bound, value));
	return (binary_s(array, bound / 2, size - 1, value));
}
