#include "search_algos.h"

/**
 * binary_search - function that searches for
 *                 a value in a sorted array
 *                 of integers using the Binary
 *                 search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: If value is not present in array
 * or if array is NULL, return -1
*/
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, mid, i = 0;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
			else
				printf("\n");
		}
		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}


