#include "search_algos.h"

/**
 * print_array - print array elements
 * @array: pointer to the first element of the array to search in
 * @start: starting point in @array
 * @end: ending point in @array
 */
void print_array(int *array, int start, int end)
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

	if (low <= high)
	{
		center = low + (high - low) / 2;
		print_array(array, low, high);

		if (
			array[center] == value &&
			(center == (int)low || array[center - 1] != value))
			return (center);
		else if (array[center] < value)
			return (binary_s(array, center + 1, high, value));
		else
			return (binary_s(array, low, center, value));
	}

	return (-1);
}


/**
 * advanced_binary - searches for a value in an array of integers
 * using Binary search algorithm & recursion
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in @array
 * @value: value to search for
 *
 * Return:
 * If array is NULL, your function must return -1
 * otherwise the index of the @value in the @array
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binary_s(array, 0, size - 1, value));
}


